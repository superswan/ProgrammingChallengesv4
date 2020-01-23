CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic \
	-Wformat=2 -Wno-unused-parameter -Wshadow \
	-Wwrite-strings -Wstrict-prototypes -Wold-style-definition \
	-Wredundant-decls -Wnested-externs -Wmissing-include-dirs

convradix : convradix.c
	$(CC) -o convradix convradix.c

assembly: convradix.c
	$(CC) -S -o convradix-asm convradix.c
