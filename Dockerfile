FROM debian:testing


MAINTAINER Kary Ocana "karyanna@gmail.com"


# =============
# --- Linux ---
# =============

RUN apt-get -y update && apt-get -y install wget --assume-yes apt-utils && apt-get -y install build-essential && apt-get -y install dialog apt-utils



# ====================================
# --- GenomeTools AND Dependencies ---
# ====================================

# Libraries
RUN apt-get -y install libcairo2-dev && apt-get -y install libpango1.0-dev &&

# GenomeTools
RUN wget http://genometools.org/pub/genometools-1.5.9.tar.gz && \
	tar xzvf genometools-1.5.9.tar.gz && \
	cd genometools-1.5.9 && \
	make install
