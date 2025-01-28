build:
	nvcc $(module).cu -o $(module)

run: build
	./$(module)

clean:
	rm $(module)

code:
	code $(module).cu