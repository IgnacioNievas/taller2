#include <stdio.h>

int main (void){

    FILE * f = fopen("t.txt","r");
int c = fgetc(f);
int cx = fgetc(f);
printf("%c%c " ,c,cx);
fclose(f);

return 0;    
}