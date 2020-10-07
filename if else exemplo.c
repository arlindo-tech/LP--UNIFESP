#include <stdio.h>

int main(){
	int valor;
	printf("Informe o valor: ");
	scanf("%d", &valor);
	if(valor % 2==1){
		printf("\nValor impar\n");
	} else {
		if(valor == 0){
			printf("\nValor nulo\n");
		} else{
			printf("\nValor par\n");
		}
	}
	return 0;
}
