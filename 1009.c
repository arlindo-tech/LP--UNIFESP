#include <stdio.h>

int main() {
	char NOME[21];
	double SALAFIX, COMISSAO, BONUS, TOTAL;
	scanf("%s", NOME);
	scanf("%lf %lf", &SALAFIX, &COMISSAO);
	BONUS = COMISSAO * 0.15;
	TOTAL = SALAFIX + BONUS;
	printf("TOTAL = R$ %.2lf\n", TOTAL);
	return 0;
}