#include <stdio.h>

int main(){
	double X, Y, XESQUE;
	scanf("%lf %lf", &X, &Y);
	XESQUE = (X/Y);
	printf("%.3lf km/l\n", XESQUE);
}