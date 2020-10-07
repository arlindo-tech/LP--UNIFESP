#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int cmpfunc (const void * A, const void * B) {
   return ( *(int*)A - *(int*)B );
   }

int main(int argc,char *argv[]){
 int N,Q,R=1,loc,Y,X,aux;
 
 #ifdef DEBUG
 clock_t Ticks[2];
 Ticks[0] = clock();
 #endif
 
 do{
  scanf("%d %d",&N,&Q);
  if(N==0&Q==0){
   break;
  }
  int per[N];
  for(X=0;X<N;X++){
   scanf(" %d",&per[X]);
  }
  
  qsort(per,N,sizeof(int),cmpfunc);
  
  printf("CASE# %d:\n",R);
  for(X=0;X<Q;X++){
   scanf("%d",&loc);
   for(Y=0;per[Y]!=loc;Y++);
   if(Y>N){
    printf("%d not found\n",loc);
   }else{
    printf("%d found at %d\n",loc,Y+1);
   }
  }
  R++;
 }while((N!=0&&Q!=0)||R>65);
 
 #ifdef DEBUG
 Ticks[1] = clock();
 double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %g ms.(%.2lf)", Tempo,Tempo*60);
 #endif
 return 0;
}