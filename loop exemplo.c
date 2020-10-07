#include <stdio.h>
int main (void)
{
  int n;
  while (1)
  {
    printf("digite um numero inteiro: ");
    scanf("%d", &n);
    if (n == 7)
    {
      printf("saindo do loop\n");
      break;
    }
    
    printf("Numero: %d\n",n);
  }
  
  printf("Fim de programa");
  return(0);
}