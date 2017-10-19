FROM debian:testing


MAINTAINER Kary Ocana "karyanna@gmail.com"


# =============
# --- Linux ---
# =============

#RUN apt-get -y update && apt-get -y install wget --assume-yes apt-utils && apt-get -y install build-essential && apt-get -y install dialog

#RUN apt-get -y update && apt-get -y upgrade 
RUN apt-get -y update && apt-get install -y --no-install-recommends apt-utils
RUN apt-get -y install build-essential
RUN apt-get -y install wget --assume-yes
RUN apt-get -y install tar --assume-yes
RUN apt-get -y install zip --assume-yes
RUN apt-get -y install unzip --assume-yes
RUN apt-get -y install git --assume-yes
RUN apt-get -y install -f
RUN apt-get -y install gawk
RUN apt-get --yes install awk

# Libraries GenomeTools
RUN apt-get -y install libcairo2-dev && apt-get -y install libpango1.0-dev
RUN apt-get -y install zlib1g-dev --assume-yes
RUN apt-get -y install bzip2 --assume-yes
#RUN apt-get -y install lib32z1 lib32ncurses5 libbz2-1.0:i386 lib32stdc++6 --assume-yes
RUN apt-get -y install liblua5.1-0 --assume-yes
RUN apt-get -y install lua-filesystem --assume-yes
RUN apt-get -y install lua-lpeg --assume-yes
RUN apt-get -y install lua-md5 --assume-yes
RUN apt-get -y install libexpat1 --assume-yes
RUN apt-get -y install libtre-dev --assume-yes
RUN apt-get -y install libsqlite3-dev --assume-yes
RUN apt-get -y install libbam-dev --assume-yes

# ======================================
# --- RepeatmMasker AND Dependencies ---
# ======================================

# RepeatMasker (http://www.repeatmasker.org/RMDownload.html)

# For Cross_Match (http://www.phrap.org): local "databases/crossmatch.tar.gz", obtido da caprichosa

# RMBlast (download page: http://www.repeatmasker.org/RMBlast.html)Configure RepeatMasker: To use the new search engine with RepeatMasker or RepeatModeler, run/re-run the configure program in the RepeatMasker directory followed by the configure program in the RepeatModeler directory.
RUN wget ftp://ftp.ncbi.nlm.nih.gov/blast/executables/blast+/2.6.0/ncbi-blast-2.6.0+-src.tar.gz && \
 	wget http://www.repeatmasker.org/isb-2.6.0+-changes-vers2.patch.gz

	# Unpack Distribution:
RUN	cp ncbi-blast-2.6.0+-src.tar.gz /tmp && \
    cp isb-2.6.0+-changes-vers2.patch.gz /tmp && \
    cd /tmp && \
    tar zxvf ncbi-blast-2.6.0+-src.tar.gz && \
	gunzip isb-2.6.0+-changes-vers2.patch.gz

	# Patch
RUN	cd /tmp/ncbi-blast-2.6.0+-src && \
	patch -p1 < ../isb-2.6.0+-changes-vers2.patch
	
	# Build
RUN	cd /tmp/ncbi-blast-2.6.0+-src/c++ && \
	./configure --with-mt --prefix=/usr/local/rmblast --without-debug && \
	make && \
	make install

# HMMER (http://hmmer.org/)
RUN wget http://eddylab.org/software/hmmer3/3.1b2/hmmer-3.1b2-linux-intel-x86_64.tar.gz && \
	tar xf hmmer-3.1b2-linux-intel-x86_64.tar.gz && \
	cd hmmer-3.1b2-linux-intel-x86_64 && \
 	./configure && \
	make && \
	make check && \
	make install

# WUBlast (licensing) ->  local "databases/wublast.tar.gz",

# TRF -> click -> local "databases/trf",

# RepeatMasker Libraries
RepeatMasker now comes with two small, but growing open databases ( Dfam and Dfam_consensus ) and will work out-of-the box with these datasets. However it is advised that you also obtain a license for the RepBase RepeatMasker Edition to supplement these sequences. To obtain a license and download the library go to http://www.girinst.org. Once you have obtain the library ( current version is RepBaseRepeatMaskerEdition-20170127.tar.gz ) file from GIRI unpack it in the RepeatMasker directory and it will automatically place the contents in the correct subdirectories.

    # RepBaseRepeatMasker -> local "databases/RepBaseRepeatMaskerEdition-20170127.tar.gz",
RUN cp RepBaseRepeatMaskerEdition-20170127.tar.gz /usr/local/RepeatMasker/ && \ 
	cd /usr/local/RepeatMasker && \ 
	gunzip RepBaseRepeatMaskerEdition-20170127.tar.gz && \ 
	tar xvf RepBaseRepeatMaskerEdition-20170127.tar && \ 
	rm RepBaseRepeatMaskerEdition-20170127.tar

    # Dfam Updates
RUN wget http://www.dfam.org/web_download/Release/Dfam_2.0/Dfam.hmm.gz
	cp Dfam.hmm.gz /usr/local/RepeatMasker/Libraries && \ 
	cd /usr/local/RepeatMasker/Libraries && \ 
	gunzip Dfam.hmm.gz && \ 
	rm Dfam.hmm.gz

# RepeatMasker
RUN wget http://www.repeatmasker.org/RepeatMasker-open-4-0-7.tar.gz && \ 
	cp RepeatMasker-open-4-0-7.tar.gz /usr/local && \ 
	cd /usr/local && \ 
	gunzip RepeatMasker-open-4-0-7.tar.gz && \ 
	tar xvf RepeatMasker-open-4-0-7.tar 

# Run RepeatMasker Configure Script (depois que o "databases" estiver apontado e todas as depências estiverem instaladas)
RUN	cd /usr/local/RepeatMasker && \ 
	perl ./configure



# ====================================
# --- GenomeTools AND Dependencies ---
# ====================================

# GenomeTools
RUN apt-get -y install genometools
RUN apt-get -y install libgenometools0 libgenometools0-dev
