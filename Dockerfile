FROM debian:testing


MAINTAINER Kary Ocana "karyanna@gmail.com"


# =============
# --- Linux ---
# =============

RUN apt-get -y update && apt-get -y install wget && apt-get -y install --no-install-recommends apt-utils && apt-get -y install build-essential

