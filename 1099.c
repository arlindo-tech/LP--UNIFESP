#include <stdio.h>
int main(){
 int N, X, Y, Z;
 int K = 0;
 scanf("%d", &N);
 int I, J;
 while (I < N){
  scanf("%d %d", &X, &Y);
  if (X == Y || Y == X + 1 || X == Y +1){
   printf("0\n");
 }  
 else if ( X < Y || X > Y){
   if (X > Y){
    Z = X;
    X = Y;
    Y = Z;
  }
  for (J = 0; J < N; J++){ 
   while(X < Y - 1){
     X += 1; 
    if(X % 2 != 0){
    K += X;
     }
    }
     }
  printf("%d\n", K);
  K = 0;
  }
 I++;
 }
 return 0;
}