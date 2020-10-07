#include <stdio.h>

int main(){
    float R;
	scanf("%f" ,&R);
	if(2000.00 >= R)printf("Isento\n");
	else
	{
		if(R <=3000.00)printf("R$ %.2f\n", (R - 2000)*(0.08));
		else
		{
			if(R <=4500.00)printf("R$ %.2f\n", (1000.0 * 0.08)+(R - 3000) *(0.18));
			else
			{
			printf("R$ %.2f\n",(1000.0 * 0.08)+(1500.0 * 0.18)+(R - 4500)*(0.28));
			}
		}
	}	
return 0;
}