case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C31"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\time\spec\include" -I"\$(ISE_LIBRARY)\library\process\base\platform\windows\include" -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = simple_encryption$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C31_c.obj 

OLDOBJECTS =  pr1020.o pr1020d.o ar993.o ar993d.o re1003.o re1003d.o in991.o \
	in991d.o dy1001.o dy1001d.o li995.o li995d.o se997.o se997d.o \
	ar1002.o ar1002d.o dy994.o dy994d.o bo1004.o bo1004d.o ta992.o \
	ta992d.o co1006.o co1006d.o un1000.o un1000d.o hm1005.o hm1005d.o \
	ch996.o ch996d.o bo990.o bo990d.o se1021.o se1021d.o bi998.o bi998d.o \
	dy999.o dy999d.o co1007.o co1007d.o rt1010.o rt1010d.o rt1022.o \
	rt1022d.o rt1009.o rt1009d.o rt1011.o rt1011d.o rt1012.o rt1012d.o \
	rt1013.o rt1013d.o rt1014.o rt1014d.o rt1015.o rt1015d.o rt1016.o \
	rt1016d.o rt1017.o rt1017d.o rt1018.o rt1018d.o rt1019.o rt1019d.o \
	in1008.o in1008d.o 

all: Cobj31.o

Cobj31.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj31.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

