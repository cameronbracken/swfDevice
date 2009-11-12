CC = gcc -g -Wall -I. -I${R_HOME}/include

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
	${CC} ${OFILES} blocks/*.o actioncompiler/*.o -shared -fpic \
	  -o libming.so
	cp libming.so ..

static: ${OFILES}
	cd blocks && make
	cd actioncompiler && make
	ar r libming.a blocks/*.o actioncompiler/*.o ${OFILES}
	ranlib libming.a  # bsd requires this?
	cp libming.a ..

clean:
	cd blocks && make clean
	cd actioncompiler && make clean
	rm -f *.o libming.a libming.so