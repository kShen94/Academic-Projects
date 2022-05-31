INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 18.07 GPL\library\wel\spec\windows\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 18.07 GPL\library\time\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 18.07 GPL\library\vision2\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 18.07 GPL\C_library\zlib"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 18.07 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 18.07 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:WINDOWS
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 18.07 GPL\studio\spec\win64\lib\msc_vc140\mtwkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 18.07 GPL\studio\config\win64\templates
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
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 18.07 GPL\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = sudoku.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C4_c.obj 

OLDOBJECTS =  we1088.obj we1088d.obj we1087.obj we1087d.obj we1086.obj we1086d.obj we1085.obj \
	we1085d.obj we1084.obj we1084d.obj we1083.obj we1083d.obj we1082.obj we1082d.obj \
	we1081.obj we1081d.obj we1080.obj we1080d.obj ev1079.obj ev1079d.obj we1078.obj \
	we1078d.obj we1077.obj we1077d.obj we1076.obj we1076d.obj ev1075.obj ev1075d.obj \
	we1074.obj we1074d.obj we1073.obj we1073d.obj ev1072.obj ev1072d.obj we1071.obj \
	we1071d.obj uc1070.obj uc1070d.obj kl1069.obj kl1069d.obj we1068.obj we1068d.obj \
	we1067.obj we1067d.obj we1066.obj we1066d.obj we1065.obj we1065d.obj we1064.obj \
	we1064d.obj we1063.obj we1063d.obj ev1062.obj ev1062d.obj we1061.obj we1061d.obj \
	we1060.obj we1060d.obj ev1059.obj ev1059d.obj ev1058.obj ev1058d.obj we1057.obj \
	we1057d.obj we1056.obj we1056d.obj 

all::  Cobj4.lib

Cobj4.lib: $(OBJECTS) Makefile
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

