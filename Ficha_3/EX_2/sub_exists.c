#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 64
int main(int argc, char* argv[]) {
char* p1 = (char*)malloc(MAX_SIZE * sizeof(char));
char* p2 = (char*)malloc(MAX_SIZE * sizeof(char));
char* p;

strcpy(p1, argv[1]);
strcpy(p2, argv[2]);

p = strstr(p2,p1);

if (p) {
        printf("String found\n");
    }
    else
        printf("String not found\n");

    return 0;

}
