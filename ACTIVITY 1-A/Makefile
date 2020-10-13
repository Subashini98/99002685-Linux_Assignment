SRC = src/mystring.c\
src/myutils.c\
src/bitmask.c\
src/test.c



INC = -Iinclude\

PROJECT_NAME = all.out

${PROJECT_NAME}: ${SRC}
	gcc ${SRC} ${INC} -o ${PROJECT_NAME}

all: ${SRC} ${BUILD}
	gcc ${SRC} ${INC} -o ${PROJECT_NAME}

run:${PROJECT_NAME}
	./${PROJECT_NAME}

clean:
	rm -rf ${PROJECT_NAME}
