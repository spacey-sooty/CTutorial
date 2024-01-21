all: compile

compile:
	mkdir -p build
	gcc -o build/pointers pointers.c
	gcc -o build/casts casts.c
	gcc -o build/memory memory.c
