#include <stdio.h>

int main(void){
int c;
    FILE *f = fopen("t.txt","r");
    FILE *f2 =fopen("t2.txt","w");



while((c = fgetc(f)) !=-1){
    fputc(c,f2);
}

fclose(f);
fclose(f2);

return 0 ;

}