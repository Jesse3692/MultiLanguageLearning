build:
	nvcc $(module).cu -o $(module)

run: build
	./$(module)
	rm $(module)

clean:
	rm $(module)

code:
	code $(module).cu