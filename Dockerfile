FROM debian:testing


MAINTAINER Kary Ocana "karyanna@gmail.com"


# =============
# --- Linux ---
# =============

RUN apt-get -y update && apt-get -y install wget && apt-get install -y --no-install-recommends apt-utils

# =====================================
# --- RepeatmMasker AND Dependencies ---
# =====================================

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