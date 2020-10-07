#include <stdio.h>

int main(){
	double N;
	int n100, n50, n20, n10, n5, n2;
	int mr1, m50, m25, m10, m5, mc1;
    int troco, cents;
	scanf("%lf", &N);
	troco = (N);
	cents = ((N - troco) * 100);
	n100 = troco/100;
	troco = troco -(n100 * 100);
	n50 = troco /50;
	troco = troco - (n50 * 50);
	n20 = troco/20;
	troco = troco - (n20 * 20);
	n10 = troco/10;
	troco = troco - (n10 * 10);
	n5 = troco/5;
	troco = troco -(n5 * 5);
	n2 = troco/2;
	troco = troco - (n2 * 2);
	mr1 = troco/1;
	m50 = cents/50;
	cents = cents % 50;
	m25 = cents/25;
	cents = cents % 25;
	m10 = cents/10;
	cents = cents % 10;
    m5 = cents/5;
	cents = cents % 5;
	mc1 = cents;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", mr1);
	printf("%d moeda(s) de R$ 0.50\n", m50);
	printf("%d moeda(s) de R$ 0.25\n", m25);
	printf("%d moeda(s) de R$ 0.10\n", m10);
	printf("%d moeda(s) de R$ 0.05\n", m5);
	printf("%d moeda(s) de R$ 0.01\n", mc1);
}