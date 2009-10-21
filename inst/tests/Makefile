all: tests examples

tests:
	@echo "Running Ming Tests"
	./runRswfDeviceTests.sh

examples: 
	@echo "Running Ming Tests"
	gcc -o testButtons -L/opt/local/lib -lming -I/opt/local/include testButtons.c 
	./testButtons
	gcc -o testShapes -L/opt/local/lib -lming -I/opt/local/include testShapes.c 
	./testShapes

clean:
	rm *.swf testShapes testButtons
