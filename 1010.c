#include <stdio.h>

int main() {
	int codigo_1, pecas_1, codigo_2, pecas_2;
	double valor_1, valor_2, VALOR_A_PAGAR;
	scanf("%d %d %lf", &codigo_1, &pecas_1, &valor_1);
	scanf("%d %d %lf", &codigo_2, &pecas_2, &valor_2);
    VALOR_A_PAGAR = (valor_1*pecas_1)+(valor_2*pecas_2);
	printf("VALOR A PAGAR: R$ %.2f\n", VALOR_A_PAGAR);
	return 0;
}