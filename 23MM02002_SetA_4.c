#include<stdio.h>
void main()
{
    int num,d1,d2,c1=0,c2=0;
    printf("Eneter the number: \n");
    scanf("%d",&num);
    int i,j,k;
    for(i=1;i<num;i++)
    {
        d1=i;
        d2=num-i;
        c1=0,c2=0;
        for(j=1;j<=d1;j++)
        {
            if(d1%j==0)
            c1++;
        }
        for(k=1;k<=d2;k++)
        {
            if(d2%k==0)
            c2++;
        }
        if(c1==2&&c2==2)
        printf("%d %d\n",d1,d2);
        if(d1>d2)
        break;
    }
}