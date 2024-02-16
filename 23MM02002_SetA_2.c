#include<stdio.h>
void main()
{
    int  num,d,i,j,f=1,s=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10)
    {
        f=1;
        d=i%10;//digit of the number
        for(j=d;j>=1;j--)
        {
            f=f*j;//calculating factorial
        }
        s=s+f;//calculating sum
    }
    if(s==num)
    printf("%d is a strong  number \n",num);
    else
    printf("%d is not a strong number \n",num);
}