#include <stdio.h>
#include <math.h>

int main(void){
	int A, B, C, MAIOR_AB, MAIOR;
	scanf("%i", &A);
	scanf("%i", &B);
	scanf("%i", &C);
	MAIOR_AB = (A + B+ abs(A - B))/2;
	MAIOR = (MAIOR_AB + C + abs(MAIOR_AB - C))/2;
	printf("%i eh o maior\n", MAIOR);
	return 0;
}