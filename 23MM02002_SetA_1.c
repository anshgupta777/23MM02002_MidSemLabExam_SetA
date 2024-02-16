#include<stdio.h>
void main()
{
    double r,Vol,SA,pi=3.14;
    printf("Enter the radius of the sphere:\n");
    scanf("%lf",&r);
    Vol=(4.0/3.0)*(pi*r*r*r);//calculating thevolume of the sphere
    SA=4*pi*r*r;//calculating Surface area of the sphere
    printf("Volume of the sphere=%lf cubic units\n",Vol);
    printf("Surface area of the sphere =%lf sq units",SA);
}