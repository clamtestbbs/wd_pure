# ------------------------------------------------------- #
#  util/Makefile	( NTHU CS MapleBBS Ver 2.36 )	  #
# ------------------------------------------------------- #
#  target : Makefile for �H�H�B�έp�B�ƥ��B�t�κ��@�u��	  #
#  create : 95/03/29				 	  #
#  update : 95/12/15				 	  #
# ------------------------------------------------------- #
BBSHOME=/home/bbs

# For FreeBSD
CC	= gcc
CFLAGS	= -O -DBSD44 -pipe -fomit-frame-pointer -I../include -I../WD -D_BBS_UTIL_C_
LDFLAGS	= -s -L../lib -ldao -lcrypt

# For SunOS 5.6
#CC	= gcc
#CFLAGS	= -O2 -pipe -fomit-frame-pointer -I../include -I../WD -DSYSV -DSOLARIS
#LDFLAGS	= -ltermcap -lnsl -lsocket -ldl -L../lib -ldao

# For Linux
#CC	= gcc
#CFLAGS	= -O2 -pipe -fomit-frame-pointer -I../include -I../WD -DLINUX -D_BBS_UTIL_C_
#LDFLAGS	= -s -fforce-mem -funroll-loops -fstrict-prototype -Wunused -L../lib -ldao -lcrypt

.SUFFIXES: .o .c

.c:   ;   $(CC) -o $@ $@.c $(CFLAGS) $(LDFLAGS)

TOOL =  setuser	

all: 	$(TOOL)


install:$(TOOL)
	strip $(TOOL)
	chown bbs:bbs $(TOOL)
	cp -fp $(TOOL) $(BBSHOME)/bin

clean:
	rm -fr $(TOOL) *.o *.BAK *.log *~