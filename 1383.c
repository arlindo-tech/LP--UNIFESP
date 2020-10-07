#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int verifica(int linha, int P, int m[9][9]){
    int soma = 0, I;
    for(I = P; I < P + 3; I++){
        soma = soma + m[linha][I];
    }
 
    linha++;
    for(I = P; I < P + 3; I++){
        soma = soma + m[linha][I];
    }
 
    linha++;
    for(I = P; I < P + 3; I++){
        soma = soma + m[linha][I];
    }

    if(soma == 45){
        return 0;
    }else{
        return 1;
    }
}
 
int main(){
    int P = 1, I, J, N, K, m[9][9];
    int flag ,*vet;
    scanf("%d",&N);
    while(N--){
        for(I = 0;I < 9; I++){
            for(J = 0; J < 9; J++){
                scanf("%d",&m[I][J]);
            }
        }
 
        printf("Instancia %d\n",P);
 
        flag = 0;
        for(I = 0;I < 9;I ++){
            vet = (int*)calloc(10,sizeof(int));
            for(J = 0;J < 9; J++){
                if( vet[m[I][J]] == 0 ){
                    vet[m[I][J]] = m[I][J];
                }else{
                    flag = 1;
                    I = 9;
                    J = 9;
                }
            }
        }
        for(I = 0; I < 9; I++){
            vet = (int*)calloc(10,sizeof(int));
            for(J = 0;J < 9; J++){
                if( vet[m[J][I]] == 0 ){
                    vet[m[J][I]] = m[J][I];
                }else{
                    flag = 1;
                    I = 9;
                    J = 9;
                }
            }
        }
        if(flag == 1){
            puts("NAO");
        }else{
            // verifica as 9 matrizes 3x3 e retorna 0 caso a soma dos elementos for 45
            flag += verifica(0,0,m);
            flag += verifica(0,3,m);
            flag += verifica(0,6,m);
            flag += verifica(3,0,m);
            flag += verifica(3,3,m);
            flag += verifica(3,6,m);
            flag += verifica(6,0,m);
            flag += verifica(6,3,m);
            flag += verifica(6,6,m);
            if( flag == 0 ){
                puts("SIM");
            }else{
                puts("NAO");
            }
        }
        puts("");
        P++;
    }
    return 0;
}