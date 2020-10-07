# include <stdio.h>

void main(){
	int A, B, AUXILIAR, i, n;
	A = 0;
	B = 1;
	printf("digite um numero");
	scanf("%d", &n);
	printf("serie de fibonacci:/n");
	printf("%d\n", B);
	for(i=0; i<n; i++)
	{
		AUXILIAR = A + B;
		A = B;
		B = AUXILIAR;
		printf("%d\n", AUXILIAR);
	}
}