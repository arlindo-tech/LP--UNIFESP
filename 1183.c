#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,X,Y,Z,P = 1;
    scanf("%s", &T);
    for(X=0;X<=11;X++)
    {
        for(Y=0; Y<=11; Y++)
            scanf("%lf", &M[X][Y]);
    }
    for(Z = 0; Z <= 11; Z++)
    {
        for(C = P; C <= 11;C++)
            a+=M[Z][C];
        P++;
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a = a/66.0;
        printf("%.1lf\n",a);
    }
    return 0;
}