# Default Compiler
# for C use gcc
# for C++ use g++
CC:= gcc

# Directories to headers and objects
TOPDIR:= ../..
INCLUDE:= ${TOPDIR}/include
SOURCE:= ${TOPDIR}/source

# Flags
CFLAGS:= -I $(INCLUDE)

_DEPS:= list.h
DEPS:= $(patsubst %,$(INCLUDE)/%,$(_DEPS))

_MAIN:= ex1_dlist.c
_SRC:= dlist.c
SRC:= $(patsubst %,$(SOURCE)/%,$(_SRC))
OBJ:= $(SRC:.c=.o) $(_MAIN:.c=.o)

# Program name
EXE:= dlist.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXE): $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f ./*.o ${SOURCE}/*.o
