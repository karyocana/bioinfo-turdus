FROM debian:testing


MAINTAINER Kary Ocana "karyanna@gmail.com"


# =============
# --- Linux ---
# =============

RUN apt-get -y update && apt-get -y install wget && apt-get -y install --no-install-recommends apt-utils && apt-get -y install build-essential


# ======================================
# --- RepeatmMasker AND Dependencies ---
# ======================================

# RMBlast
RUN wget ftp://ftp.ncbi.nlm.nih.gov/blast/executables/blast+/2.6.0/ncbi-blast-2.6.0+-src.tar.gz && \
 	wget http://www.repeatmasker.org/isb-2.6.0+-changes-vers2.patch.gz && \
    cp ncbi-blast-2.6.0+-src.tar.gz /tmp && \
    cp isb-2.6.0+-changes-vers2.patch.gz /tmp && \
    cd /tmp && \
    tar zxvf ncbi-blast-2.6.0+-src.tar.gz && \
	gunzip isb-2.6.0+-changes-vers2.patch.gz && \
	cd ncbi-blast-2.6.0+-src/c++ && \
	./configure --with-mt --prefix=/usr/local/rmblast --without-debug && \
	make && \
	make install

# Configure RepeatMasker: To use the new search engine with RepeatMasker or RepeatModeler, run/re-run the configure program in the RepeatMasker directory followed by the configure program in the RepeatModeler directory.

# HMMER
RUN wget http://eddylab.org/software/hmmer3/3.1b2/hmmer-3.1b2-linux-intel-x86_64.tar.gz && \
	tar xf hmmer-3.1b2-linux-intel-x86_64.tar.gz && \
	cd hmmer-3.1b2-linux-intel-x86_64 && \
 	./configure && \
	make && \
	make check && \
	make install

# TRF -> click -> download databases

# RepeatMasker
RUN wget http://www.repeatmasker.org/RepeatMasker-open-4-0-7.tar.gz && \ 
	cp RepeatMasker-open-4-0-7.tar.gz /usr/local && \ 
	cd /usr/local && \ 
	gunzip RepeatMasker-open-4-0-7.tar.gz && \ 
	tar xvf RepeatMasker-open-4-0-7.tar 

# Dfam Updates
RUN wget http://www.dfam.org/web_download/Release/Dfam_2.0/Dfam.hmm.gz
	cp Dfam.hmm.gz /usr/local/RepeatMasker/Libraries && \ 
	cd /usr/local/RepeatMasker/Libraries && \ 
	gunzip Dfam.hmm.gz && \ 
	rm Dfam.hmm.gz

# Run RepeatMasker Configure Script
RUN	cd /usr/local/RepeatMasker && \ 
	perl ./configure