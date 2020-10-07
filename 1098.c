#include <stdio.h>
int main()
{
    double A, B, C = 1, d = 3, E, F;
    int X;
    for(A = 0; A <= 1.9; A = A +.2)
    {
        for(B = 1.0; B <= 3.0; B++)
        {
            E = B + A;
            if(A == 0.0 || A == 1.0) printf("I=%.0lf J=%.0lf",A, E);
            else if(E == 3.0 || E == 4.0 || E == 5.0) printf("I=%.0lf J=%.0lf",A, E);
            else printf("I=%.1lf J=%.1lf",A, E);
            printf("\n");
        }
    }
    for(X = 3; X <= 5; X++) printf("I=2 J=%d\n",X);
    return 0;
}
