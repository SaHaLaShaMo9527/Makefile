DIR_INC = ./include
DIR_SRC = ./source
DIR_OBJ = ./obj
DIR_BIN = ./bin
SOURCE = $(wildcard ${DIR_SRC}/*.c)
OBJ = $(patsubst %.c, ${DIR_OBJ}/%.o, $(notdir ${SOURCE}))
TARGET = main
BIN_TARGET = ${DIR_BIN}/$(TARGET)
CC = gcc
CFLAGS =-g -I ${DIR_INC}
$(warning aaa)
#all:
#	@echo $(SOURCE)
#	@echo $(OBJ)
#	@echo $(BIN_TARGET)
${BIN_TARGET}:${OBJ}
	$(CC) $(OBJ) -o $@
$(warning bbb)
${DIR_OBJ}/%.o: ${DIR_SRC}/%.c
	$(CC) $(CFLAGS) -c $< -o $@
.PHONY: clean
clean:
	 rm -rf ${DIR_OBJ}/*.o
