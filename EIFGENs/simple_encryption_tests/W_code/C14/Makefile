INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\time\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\process\base\platform\windows\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\wel\spec\windows\include"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:CONSOLE
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\lib\msc_vc140\mtwkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = simple_encryption.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C14_c.obj 

OLDOBJECTS =  sp435.obj sp435d.obj sp456.obj sp456d.obj ar432.obj ar432d.obj ar453.obj ar453d.obj \
	ty429.obj ty429d.obj ty430.obj ty430d.obj sp436.obj sp436d.obj sp457.obj sp457d.obj \
	na433.obj na433d.obj na454.obj na454d.obj re460.obj re460d.obj it452.obj it452d.obj \
	it451.obj it451d.obj ar431.obj ar431d.obj ar434.obj ar434d.obj ar455.obj ar455d.obj \
	re444.obj re444d.obj to438.obj to438d.obj ce446.obj ce446d.obj dy442.obj dy442d.obj \
	ha448.obj ha448d.obj ge437.obj ge437d.obj ge458.obj ge458d.obj in461.obj in461d.obj \
	ar443.obj ar443d.obj dy439.obj dy439d.obj bo445.obj bo445d.obj un441.obj un441d.obj \
	ta449.obj ta449d.obj ty459.obj ty459d.obj dy440.obj dy440d.obj rt447.obj rt447d.obj \
	ta450.obj ta450d.obj 

all::  Cobj14.lib

Cobj14.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

