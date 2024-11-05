#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 64

int main(int argc, char* argv[]) {
char* p1 = (char*)malloc(MAX_SIZE * sizeof(char));

strcpy(p1, argv[1]);

for (int i = 0; i < strlen(argv[1]); i++){
	p1[i] = tolower(p1[i]);
}

printf("%s\n", p1);
}
