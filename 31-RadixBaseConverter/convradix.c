/* 
Convert any radix to decimal using the modulo method.
This verion only supports converting decimal integers
up to 255. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main (int argc, char **argv) {
    if (argc < 3 || argc > 3) { 
        printf("[ERROR] %s takes exactly 2 arguments\n", argv[0]);
    }
    else {
        printf("%s\n", argv[0]);
        long num_s = strtol(argv[1], NULL, 10);
        long base = strtol(argv[2], NULL, 10);
        long q = num_s; /* quotient */
        long r; /* remainder */
        
        int i = 0;
        int converted[64] = {};

        while (q != 0) { 
           r = q % base;
           q = q / base;
           converted[i] = r;
           i++;
        }
        
        for (int j=7; j >= 0; j--) {
            printf("%d", converted[j]);
        }
        printf("\n"); 
    }
}

