#include <stdio.h>


char main(){
int i = 8 , * pi = &i ;
long l = 8 , * pl =&l ;
float f = 102.8  , * pf =&f ;
double d =678.44 , * pd =&d ;
int vec [100],*pvec= &vec[0];
vec [0] = 44;
 printf ( " variable int , tam . bytes : %d  \tdir .&i : %p \t valor : %d \n " , sizeof( i ) , &i , i ) ;

 printf ( " puntero int , tam . bytes : %d \tdir .&pi : %p \t valor : %p \n " , sizeof( pi ) , &pi , pi ) ;
printf ( " variable long , tam . bytes : %d \tdir .&l : %p \t valor : %ld \n " , sizeof( l ) , &l , l ) ;
 printf ( " puntero long , tam . bytes : %d \tdir .&pl : %p \t valor : %p \n " , sizeof( pl ) , &pl , pl ) ;

 printf ( " variable float , tam . bytes : %d \tdir .&f : %p \t valor : %.1f \n " , sizeof( f ) , &f , f ) ;

 printf ( " puntero float , tam . bytes : %d \tdir .&pf : %p \t valor : %p \n " , sizeof( pf ) , &pf , pf ) ;

printf ( " variable double , tam . bytes : %d \tdir .&d : %p \t valor : %.2lf \n " , sizeof( d ) , &d , d ) ;
 printf ( " puntero double , tam . bytes : %d \tdir .&pd : %p \t valor : %p \n " , sizeof( pd ) , &pd , pd ) ;

 printf ( " variable array , tam . bytes : %d \tdir .&vec[0]: %p \t valor : %d \n " , sizeof( vec [0]) , &vec[0] , vec [0]) ;
 printf ( " puntero array , tam . bytes : %d \tdir .&pvec : %p \t valor : %p \n " , sizeof( vec ) , &pvec , pvec ) ;


 return 0;
}
