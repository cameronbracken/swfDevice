MING_OPTS := $(shell ming-config --libs --cflags)
prefix := output

all: tests examples

tests:
	@echo "Running Ming Tests"
	./runRswfDeviceTests.sh 

examples: 
	@echo "Running Ming Tests"
	gcc -o ${prefix}/testButtons ${MING_OPTS} testButtons.c 
	gcc -o ${prefix}/testText ${MING_OPTS} testText.c 
	gcc -o ${prefix}/testShapes ${MING_OPTS} testShapes.c 
	gcc -o ${prefix}/testActions ${MING_OPTS} testActions.c 
	(cd ${prefix}; ./testButtons; ./testText; ./testShapes; ./testActions)

clean:
	rm *.swf testShapes testButtons testText testActions
