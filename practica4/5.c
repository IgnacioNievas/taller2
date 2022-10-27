#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


int main(void){
FILE *ins = fopen("ins.txt","r");
FILE *snins = fopen("snins.txt","w");
int c;

char *p = (char*) malloc(sizeof(char)*100);

while ((c=fgetc(ins))!=-1)
{
   if(strcmp()){
    fputc(c ,snins);
   }
}


return 0;

}