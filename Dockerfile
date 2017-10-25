FROM debian:testing


MAINTAINER Kary Ocana "karyanna@gmail.com"


# =============
# --- Linux ---
# =============

ENV DEBIAN_FRONTEND noninteractive

#RUN apt-get -y update && apt-get -y install wget --assume-yes apt-utils && apt-get -y install build-essential && apt-get -y install dialog

#RUN apt-get -y update && apt-get -y upgrade 
RUN apt-get -y update 
RUN apt-get -y install dialog apt-utils
# && apt-get install -y --no-install-recommends apt-utils

RUN apt-get -y install build-essential
RUN apt-get -y install wget --assume-yes
RUN apt-get -y install tar --assume-yes
RUN apt-get -y install zip --assume-yes
RUN apt-get -y install unzip --assume-yes
RUN apt-get -y install git --assume-yes
RUN apt-get -y install -f
RUN apt-get -y install gawk
#RUN apt-get -y install devscripts build-essential
RUN apt-get -y install cpio

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

# Libraries Blast
RUN apt-get -y install gcc
RUN apt-get -y install libgtk-3-dev build-essential checkinstall
RUN apt-get -y install libncbi-vdb-dev
RUN apt-get -y install libunwind-setjmp0-dev
RUN apt-get -y install zsh
RUN apt-get -y install liblzo2-2 liblzo2-dev
RUN apt-get -y install libpcre3 libpcre3-dev
RUN apt-get -y install libmbedcrypto0 libmbedx509-0 libmbedtls-dev
RUN apt-get -y install libgmp3-dev
RUN apt-get -y install libgcrypt11-dev gcc #sudo apt-get install libgcrypt11-dev # 
RUN apt-get -y install nettle-dev
RUN apt-get -y install gnutls-bin
RUN apt-get -y install libssl-dev
RUN apt-get -y install libboost-all-dev libboost-dev
RUN apt-get -y install libffi-dev python-dev build-essential
#RUN apt-get -y update && apt-get -y dist-upgrade && apt-get -y clean && apt-get -y install tomcat6
#OpenGL
RUN apt-get -y update
RUN apt-get -y install freeglut3
RUN apt-get -y install freeglut3-dev
RUN apt-get -y install binutils-gold
RUN apt-get -y install g++ cmake
RUN apt-get -y install libglew-dev
RUN apt-get -y install g++
RUN apt-get -y install mesa-common-dev
RUN apt-get -y install build-essential
RUN apt-get -y install libglew1.5-dev libglm-dev

RUN apt-get -y install libwxgtk3.0-dev
RUN apt-get -y update &&  apt-get -y install libfreetype6
RUN apt-get -y install ftgl-dev
#RUN apt-get -y install libapache2-mod-fastcgi
#RUN apt-get -y install openjdk-6-jdk 
RUN apt-get -y install sqlite3 libsqlite3-dev
RUN apt-get -y install libmimetic0v5
RUN apt-get -y install libicu-dev
RUN apt-get -y install libapache2-mod-shib2

#xpat
RUN apt-get -y install automake autoconf libtool 
RUN apt-get -y install xsltproc 
RUN apt-get -y install libexpat-dev

RUN apt-get -y install python-dev libxml2-dev libxslt-dev libz-dev libxslt1-dev
#RUN apt-get -y install libming-dev
#RUN apt-get -y install libxerces
RUN apt-get -y install xalan
#RUN apt-get -y install libmuparser2
RUN apt-get -y install libhdf5-serial-dev
RUN apt-get -y install git
RUN apt-get -y install libjpeg-dev libfreetype6 libfreetype6-dev zlib1g-dev liblzma-dev liblz-dev
RUN apt-get -y install libpng-dev
RUN apt-get -y install zlib1g-dev
RUN apt-get -y install make g++
RUN apt-get -y install libgd2-xpm-dev
RUN apt-get -y install magic
RUN apt-get -y install curl libcurl3 libcurl3-dev
RUN apt-get -y install gsoap
#RUN apt-get -y install avro
RUN apt-get -y install cereal
RUN apt-get -y install sasl2-bin
RUN apt-get -y install mongodb
RUN apt-get -y install google-mock
RUN apt-get -y install liblapack-dev liblapack-doc-man liblapack-doc liblapack-pic liblapack3 liblapack-test liblapacke liblapacke-dev
RUN apt-get -y install libuv1-dev
RUN apt-get -y install openssh-sftp-server
RUN apt-get -y install build-essential autoconf libtool

RUN apt-get -y install -y valgrind
RUN apt-get -y install libgnutls28-dev
RUN apt-get -y install krb5-user
RUN apt-get -y install libkrb5-3
RUN apt-get -y install libaio1
RUN apt-get -y install -y unixodbc unixodbc-dev unixodbc-bin libodbc1 odbcinst1debian2 tdsodbc 
RUN apt-get -y install php7.0-imap
RUN apt-get -y install -y freetds-bin freetds-common freetds-dev libct4 libsybdb5

# Install Perl
RUN apt-get -y install perl

#NO FOUND: sss, sssutils, sssdb, krb5, sybase, mysql (instalado), bdb, orbacus, odbc, python, perl, sge, sablot,zorba, oechem,cassandra,libxlsxwriter, 
#FOUND: vdb, libunwind, z, bz2, lzo, pcre, mbedtls, gmp, gcrypt, nettle, gnutls, openssl, boost, lmdb, ftds, opengl, mesa, glut, glew, wxwidgets, freetype, ftgl, fastcgi, jni, sqlite3, mimetic, icu, sp, expat, libxml, libxslt, libexslt, xerces, xalan, muparser, hdf5, gif, jpeg, png, tiff, xpm, magic, curl, gsoap, avro, cereal, sasl2, mongodb, mongodb3, gmock, lapack, libuv, libssh2,  grpc


# ====================================
# --- MITE-Hunter AND Dependencies ---
# ====================================

RUN apt-get -y install blast2
RUN apt-get -y install muscle
RUN wget ftp://occams.dfci.harvard.edu/pub/bio/tgi/software/seqclean/mdust.tar.gz && \ 
tar -xvzf mdust.tar.gz && \ 
cd mdust && \ 
make


# ======================================
# --- RepeatMasker AND Dependencies ---
# ======================================

# RepeatMasker (http://www.repeatmasker.org/RMDownload.html)

# RepeatMasker
RUN wget http://www.repeatmasker.org/RepeatMasker-open-4-0-7.tar.gz && \ 
	cp RepeatMasker-open-4-0-7.tar.gz /usr/local && \ 
	cd /usr/local && \ 
	gunzip RepeatMasker-open-4-0-7.tar.gz && \ 
	tar xvf RepeatMasker-open-4-0-7.tar 

# For Cross_Match (http://www.phrap.org): local "databases/crossmatch.tar.gz", obtido da caprichosa

# RMBlast (download page: http://www.repeatmasker.org/RMBlast.html)Configure RepeatMasker: To use the new search engine with RepeatMasker or RepeatModeler, run/re-run the configure program in the RepeatMasker directory followed by the configure program in the RepeatModeler directory.
RUN wget ftp://ftp.ncbi.nlm.nih.gov/blast/executables/blast+/2.6.0/ncbi-blast-2.6.0+-src.tar.gz && \
 	wget http://www.repeatmasker.org/isb-2.6.0+-changes-vers2.patch.gz

	# Unpack Distribution:
RUN	cp ncbi-blast-2.6.0+-src.tar.gz /usr/local && \
    cp isb-2.6.0+-changes-vers2.patch.gz /usr/local && \
    cd /usr/local && \
    tar zxvf ncbi-blast-2.6.0+-src.tar.gz && \
	gunzip isb-2.6.0+-changes-vers2.patch.gz

	# Patch
RUN	cd /usr/local/ncbi-blast-2.6.0+-src && \
	patch -p1 < ../isb-2.6.0+-changes-vers2.patch
	
	# Build
RUN	cd /usr/local/ncbi-blast-2.6.0+-src/c++ && \
#	./configure --with-mt --prefix=/usr/local/rmblast --without-debug && \
#	make && \
#	make install
	./configure CFLAGS="-O3 -march=corei7-avx -mfpmath=sse" CXXFLAGS="-O3 -march=corei7-avx -mfpmath=sse" \
        --prefix=/usr/local/rmblast \
        --with-dll --with-algo --with-serial --with-openmp --with-64 \
        --with-check --with-hard-runpath --with-lfs \
        --with-boost=${BOOSTDIR} --with-z=${ZLIBDIR} --with-bz2=${BZIP2DIR} --with-lapack=${LAPACKDIR}



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

# RepeatMasker Libraries: RepeatMasker now comes with two small, but growing open databases ( Dfam and Dfam_consensus ) and will work out-of-the box with these datasets. However it is advised that you also obtain a license for the RepBase RepeatMasker Edition to supplement these sequences. To obtain a license and download the library go to http://www.girinst.org. Once you have obtain the library ( current version is RepBaseRepeatMaskerEdition-20170127.tar.gz ) file from GIRI unpack it in the RepeatMasker directory and it will automatically place the contents in the correct subdirectories.

    # RepBaseRepeatMasker -> local "databases/RepBaseRepeatMaskerEdition-20170127.tar.gz",
#RUN cp RepBaseRepeatMaskerEdition-20170127.tar.gz /usr/local/RepeatMasker/ && \ 
#	cd /usr/local/RepeatMasker && \ 
#	gunzip RepBaseRepeatMaskerEdition-20170127.tar.gz && \ 
#	tar xvf RepBaseRepeatMaskerEdition-20170127.tar && \ 
#	rm RepBaseRepeatMaskerEdition-20170127.tar

    # Dfam (só precisa Updates)
#RUN wget http://www.dfam.org/web_download/Release/Dfam_2.0/Dfam.hmm.gz && \ 
#	cp Dfam.hmm.gz /usr/local/RepeatMasker/Libraries && \ 
#	cd /usr/local/RepeatMasker/Libraries && \ 
#	gunzip Dfam.hmm.gz && \ 
#	rm Dfam.hmm.gz

# Run RepeatMasker Configure Script (depois que o "databases" estiver apontado e todas as depências estiverem instaladas)
###RUN	cd /usr/local/RepeatMasker && \ 
###	perl ./configure

# enter to continue
# Enter path [ /usr/bin/perl ]: 
# Enter path [ /usr/local/RepeatMasker ]: # Building Fasta database
# Enter path [ /home/programs/trf ]: 
# Add a Search Engine:
#   1. CrossMatch: [ Un-configured ]
#   2. RMBlast - NCBI Blast with RepeatMasker extensions: [ Un-configured ]
#   3. WUBlast/ABBlast (required by DupMasker): [ Un-configured ]
#   4. HMMER3.1 & DFAM: [ Un-configured ]
#   5. Done
# Enter Selection: 



# ====================================
# --- GenomeTools AND Dependencies ---
# ====================================

# GenomeTools
RUN apt-get -y install genometools
RUN apt-get -y install libgenometools0 libgenometools0-dev

