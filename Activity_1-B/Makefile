.PHONY:clean build run
NAME= test

INCLUDE = -IINC

SOURCE = SRC/mystring.c\
SRC/myutils.c\
SRC/bitmask.c\
SRC/test.c

build:
	gcc $(SOURCE) $(INCLUDE) -o $(NAME).out
run:
	./$(NAME).out
clean:
	rm *.out
