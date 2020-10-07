#include <stdio.h>
#include <string.h>

int main() {
 int X,N,I,J,K,zero,count;
 long long int num;
 char snum[101];
 while(1){
  scanf("%d %s",&N,snum);
  if(N == 0&&snum[0]=='0')
  break;
  char cha[101];
  I=0;
  J=0;
  zero=0;
  num=0;
  count=0;
  while(1){
   if(snum[I] == '\0'){
    break;
   }
   else if(snum[I] == N + 48){
    I++;
   }
   else{
    cha[J] = snum[I];
    if(J == zero)
    count++;
    if(snum[I] == '0') 
    zero++;
    I++;
    J++;
   }
  }
  cha[J]='\0';
  if(J == 0){ printf("0\n"); }
  else if(J == zero){ printf("%lld\n", num); }
  else if(count > 0){
   for(K = count - 1; cha[K] != '\0'; K++){
    printf("%d",cha[K] - 48);
   }
   printf("\n");
  }
  else 
  printf("%s\n", cha);
 }
 return 0;
}