#ming-lite

include ../Makeconf.win

FLAGS = -g -Wall -I. -I${INC_DIR} -I../windows
LIBS = 
#-L${LIB_DIR} -lz -lpng -lfreetype -lungif
CC = gcc ${FLAGS}

OFILES = \
	blocklist.o \
	compat.o \
	displaylist.o \
	fill.o \
	font_util.o \
	gc.o \
	ming.o \
	movie.o \
	movieclip.o \
	position.o \
	shape_cubic.o \
	shape_util.o \
	text_util.o

dynamic: ${OFILES}
	cd blocks && make
	cd actioncompiler && make
	${CC} ${OFILES} blocks/*.o actioncompiler/*.o ${LIBS} -shared \
	  -fpic -o libming.dll
	cp libming.dll ../../inst/libs
	cp libming.dll ..

static: ${OFILES}
	cd blocks && make
	cd actioncompiler && make
	ar r libming.a blocks/*.o actioncompiler/*.o ${OFILES} ${LIBS}
	ranlib libming.a  # bsd requires this?
	cp libming.a ..

clean:
	cd blocks && make clean
	cd actioncompiler && make clean
	rm -f *.o libming.a libming.dll
