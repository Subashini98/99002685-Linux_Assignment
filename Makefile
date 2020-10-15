.PHONY:clean build run
# Output directory
BUILD = build
NAME = test

INC=IINC

SRC=SRC/mystring.c\
SRC/myutils.c\
SRC/bitmask.c\
SRC/test.c\
all: $(SRC) $(BUILD)
        gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out -lm
build1:
        gcc $(SRC) $(INC) -o $(NAME).out 
run:
        ./$(NAME).out
clean:
        rm*.out
$(BUILD):
        mkdir build
