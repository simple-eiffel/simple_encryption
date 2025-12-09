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
echo "Compiling C code in C25"
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

OBJECTS = big_file_C25_c.obj 

OLDOBJECTS =  ar798.o ar798d.o na799.o na799d.o re793.o re793d.o li803.o li803d.o \
	it795.o it795d.o it796.o it796d.o ar813.o ar813d.o ar800.o ar800d.o \
	re823.o re823d.o in811.o in811d.o to801.o to801d.o dy821.o dy821d.o \
	li815.o li815d.o fi809.o fi809d.o in794.o in794d.o re797.o re797d.o \
	cu804.o cu804d.o tr808.o tr808d.o se817.o se817d.o ar822.o ar822d.o \
	dy814.o dy814d.o bo824.o bo824d.o ta812.o ta812d.o un820.o un820d.o \
	ch816.o ch816d.o bo810.o bo810d.o ty792.o ty792d.o ac805.o ac805d.o \
	co802.o co802d.o bi818.o bi818d.o dy819.o dy819d.o ba806.o ba806d.o \
	co807.o co807d.o 

all: Cobj25.o

Cobj25.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj25.o $(OBJECTS)
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

