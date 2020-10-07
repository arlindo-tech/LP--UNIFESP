#include <stdio.h>

int main(){
	double Velocidade, Tempo, litros;
	scanf("%lf %lf", &Velocidade, &Tempo);
	litros =(Velocidade*Tempo)/12;
	printf("%.3lf\n", litros);
	return 0;
}