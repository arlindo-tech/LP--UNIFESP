#include <stdio.h>

int main(){
	int V;
	scanf("%d", &V);
	if(V == 1)printf("January\n");
	else
	{
		if(V == 2)printf("February\n");
		else
		{
			if(V == 3)printf("March\n");
			else
			{
				if(V == 4)printf("April\n");
				else
				{
					if(V == 5)printf("May\n");
					else
					{
						if(V == 6)printf("June\n");
						else
						{
							if(V == 7)printf("July\n");
							else
							{
								if(V == 8)printf("August\n");
								else
								{
									if(V == 9)printf("September\n");
									else
									{
										if(V == 10)printf("October\n");
										else
										{
											if(V == 11)printf("November\n");
											else
											{
											    if(V == 12)printf("December\n");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}