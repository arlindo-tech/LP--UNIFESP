#include <stdio.h>
#include <math.h>
int main(void){
    int comeco, fim,total;
    scanf("%d %d",&comeco,&fim);
    if(fim == comeco){
        total = 24;
    }
    else if(fim > comeco){
        total = comeco - fim;
        total = abs(total);
    }
    else if(fim < comeco){
        total = (24 - comeco) + fim;
    }

    printf("O JOGO DUROU %d HORA(S)\n",total);
    return 0;
}