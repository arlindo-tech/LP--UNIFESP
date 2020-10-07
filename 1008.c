#include <stdio.h>

int main() {
	int NUMBER, H;
	double VPH, SALARY;
	scanf("%d %d %lf", &NUMBER, &H, &VPH);
	SALARY = (VPH * H);
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %.2lf\n", SALARY);

}