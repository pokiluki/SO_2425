#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 64

char *strremove(char *str, const char *sub) {
    size_t len = strlen(sub);
    if (len > 0) {
        char *p = str;
        while ((p = strstr(p, sub)) != NULL) {
            memmove(p, p + len, strlen(p + len) + 1);
        }
    }
    return str;
}

int main(int argc, char* argv[]) {
char* p1 = (char*)malloc(MAX_SIZE * sizeof(char));
char* p2 = (char*)malloc(MAX_SIZE * sizeof(char));
char* p;
int counter = 0;

strcpy(p1, argv[1]);
strcpy(p2, argv[2]);

p = strstr(p2,p1);

while (p){
	counter ++;
	p2 = strremove(p,p1);
	p = strstr(p2,p1);

}

printf("String Found %d times\n",counter);
return 0;
}

