#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c;
    float r1, r2;
    printf("Enter the Coefficients of the Quadratic equation(a,b,c): \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float dis = (b * b) - (4 * a * c);
    float sqrtdis = pow(dis, 0.5);
    if (a != 0)
    {
        if (dis >= 0)
        {
            r1 = ((-b) + (sqrtdis)) / (2 * a);//root 1
            r2 = ((-b) - (sqrtdis)) / (2 * a);//root 2
            if (r1 == r2)
                printf("Real and equal roots: %f %f", r1, r2);
            else
                printf("Two real roots : %f %f", r1, r2);
        }
        else
            printf("Imaginary Roots");
    }
    else
        printf("a cannot be 0");
}