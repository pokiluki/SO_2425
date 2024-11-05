#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
/* open file, exit on error */
FILE* file = fopen(argv[2], "r");
const char* word_to_search = argv[1];
if ( file == NULL ) {
printf("error: could not open %s\n", argv[2]);
exit(EXIT_FAILURE);
}

printf("[");

ssize_t read;
size_t size = 0;
char* line = NULL;
int linecount = 0;
while ((read = getline(&line, &size, file)) != -1) {
int count = 0;
linecount++;
char *token = strtok(line, " \t\n");
while(token != NULL){
count++;
if(strcmp(token, word_to_search)==0){
printf(" %d:%d,",linecount,count);
}
token = strtok(NULL," \t\n");
}

}

fclose(file);
printf("]");


exit(EXIT_SUCCESS);
}
