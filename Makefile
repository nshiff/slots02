
CFLAGS= -g -Wall -pedantic -std=gnu11

SOURCE_FILES=main.c test/suite.c slotmachine.c

all: $(SOURCE_FILES)
	gcc -o slots.bin $(SOURCE_FILES) $(CFLAGS)
