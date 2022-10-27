#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void){

FILE *f = fopen("t.txt","r");
char *d = (char*) malloc(100* sizeof(char));
assert(d != NULL);
fgets(d,100,f);
fputs(d, stdout);

fclose(f);
free(d);

return 0;

}