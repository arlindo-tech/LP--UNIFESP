#include <stdio.h>
int main (void){
    int CODIGO, QUANTIDADE;
    float PRECO[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    scanf("%d %d",&CODIGO, &QUANTIDADE);
    if(codigo == 1)
    printf("Total: R$ %.2f\n",PRECO[0]*QUANTIDADE);
    else if(CODIGO == 2)
    printf("Total: R$ %.2f\n",PRECO[1]*QUANTIDADE);
    else if(CODIGO == 3)
    printf("Total: R$ %.2f\n",PRECO[2]*QUANTIDADE);
    else if(CODIGO == 4)
    printf("Total: R$ %.2f\n",PRECO[3]*QUANTIDADE);
    else if(CODIGO == 5)
    printf("Total: R$ %.2f\n",PRECO[4]*QUANTIDADE);

   return 0;
}