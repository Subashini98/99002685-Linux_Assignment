SRC = armstrong.c

INC = A_header.h

PROJECT_NAME = Armstrong.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -f $(PROJECT_NAME) 
