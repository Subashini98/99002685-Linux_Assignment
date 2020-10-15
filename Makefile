.PHONY:clean build run
# Output
BUILD = build
NAME = test.out

INC=Iinc

SRC=src/mystring.c\
src/myutils.c\
src/bitmask.c\
src/test.c
all: $(SRC) $(BUILD)
        gcc $(SRC) $(INC) -o $(NAME) 
build1:
        gcc $(SRC) $(INC) -o $(NAME) 
run:
        ./$(NAME)
clean:
        rm*.out
$(BUILD):
        mkdir build
