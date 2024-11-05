#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
/* open file, exit on error */
FILE* file = fopen(argv[2], "r");
if ( file == NULL ) {
printf("error: could not open %s\n", argv[2]);
exit(EXIT_FAILURE);
}

if(strcmp(argv[1],"-l")==0){

ssize_t read;
size_t size = 0;
char* line = NULL;
int lineno = 0;
while ((read = getline(&line, &size, file)) != -1) {
lineno++;
}

fclose(file);
printf("%d\n",lineno);
}

if(strcmp(argv[1],"-c")==0){

char buffer[BUFFER_SIZE];
int nchars = fread(buffer, sizeof(char), BUFFER_SIZE, file);

fclose(file);
printf("%d\n",nchars);
}

if(strcmp(argv[1],"-w")==0){

ssize_t read;
size_t size = 0;
char* line = NULL;
int count = 0;
while ((read = getline(&line, &size, file)) != -1) {

char *token = strtok(line, " \t\n");
while(token != NULL){
count++;
token = strtok(NULL," \t\n");
}

}

fclose(file);
printf("%d\n",count);
}

exit(EXIT_SUCCESS);
}
