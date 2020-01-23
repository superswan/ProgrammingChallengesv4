#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main (int argc, char **argv) {
    if (argc < 3 || argc > 3) { 
        printf("[ERROR] %s takes exactly 2 arguments\n", argv[0]);
    }
    else {
        printf("%s\n", argv[0]);
        char* num_s = argv[1];
        long base = strtol(argv[2], NULL, 10);

        printf("%s\t%ld\n", num_s, base);
    }
}

