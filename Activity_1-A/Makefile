target: all out clean
all:bitmask.o mystring.o myutils.o test.o
	gcc bitmask.c mystring.c myutils.c test.c -o all.out
bitmask.o:
	gcc -c bitmask.c
mystring.o:
	gcc -c mystring.c
myutils.o:	
	gcc -c myutils.c
test.o:
	gcc -c test.c
clean:
	rm -rf *.o *.out
out:
	./all.out
