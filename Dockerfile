FROM debian:testing

RUN apt-get -y update && apt-get -y install wget
RUN wget http://www.repeatmasker.org/RepeatMasker-open-4-0-7.tar.gz
