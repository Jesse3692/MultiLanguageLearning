build:
	nvcc $(module).c -o $(module)

run: build
	./$(module)
	rm $(module)

clean:
	rm $(module)

file:
	code $(module).c