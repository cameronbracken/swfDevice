MING_OPTS := $(shell /opt/local/bin/ming-config --libs --cflags)

all: tests examples

tests:
	@echo "Running Ming Tests"
	./runRswfDeviceTests.sh

examples: 
	@echo "Running Ming Tests"
	gcc -o testButtons ${MING_OPTS} testButtons.c 
	./testButtons
	gcc -o testText ${MING_OPTS} testText.c 
	./testText
	gcc -o testShapes ${MING_OPTS} testShapes.c 
	./testShapes
	gcc -o testActions ${MING_OPTS} testActions.c 
	./testActions

clean:
	rm *.swf testShapes testButtons testText testShapes
