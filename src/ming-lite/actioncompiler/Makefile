# actioncompiler

include ../../Makeconf.win

FLAGS = -g -Wall -I. -I.. -I${INC_DIR}
CC = gcc ${FLAGS}

OFILES = 	\
	assembler.o \
	compile.o \
	compileaction.o \
	lex.swf4.o \
	lex.swf5.o \
	listaction.o \
	swf4compiler.tab.o \
	swf5compiler.tab.o

all: ${OFILES}

clean:
	rm -f *.o