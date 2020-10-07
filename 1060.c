#include <stdio.h>

int main() {

     float num;
    int valor,cont;
    for(cont = 1;cont <= 6; cont++)
    {
    scanf("%f",&num);
        if(num >= 0)
        {   
        valor = valor + 1;
        }
    }
    printf("%d valores positivos\n",valor);

    return 0;
}