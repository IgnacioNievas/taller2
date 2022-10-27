#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void){

    FILE *f = fopen("t.txt","r");
    FILE *f3 =fopen("t3.txt","w");
char *d = (char*) malloc(100* sizeof(char));
assert(d != NULL);
fgets(d,100,f);
fputs(d, f3);


fclose(f);
fclose(f3);
free(d);
return 0 ;

}