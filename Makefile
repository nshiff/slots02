
CFLAGS= -g -Wall -pedantic -std=c11

SOURCE_FILES=main.c test/suite.c

all: $(SOURCE_FILES)
	gcc -o slots.bin $(SOURCE_FILES) $(CFLAGS)
