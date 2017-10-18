FROM debian:testing


MAINTAINER Kary Ocana "karyanna@gmail.com"


# =============
# --- Linux ---
# =============

RUN apt-get -y update && apt-get -y install wget && apt-get -y install --no-install-recommends apt-utils && apt-get -y install build-essential

# ===================
# --- GenomeTools ---
# ===================

# GenomeTools
RUN wget http://genometools.org/pub/genometools-1.5.9.tar.gz && \
	apt-get -y install libcairo2-dev && \
	apt-get -y install libpango1.0-dev && \
	tar xzvf genometools-1.5.9.tar.gz && \
	cd genometools-1.5.9 && \
	make install
