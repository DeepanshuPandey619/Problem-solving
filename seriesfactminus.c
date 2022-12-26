#include<stdio.h>
void main()
{
int     i,n,fact=1,x;
    float sum=1;
    printf("enter the value of x \n");
    scanf("%d",&x);
    printf("enter the value of n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    sum=sum+pow(-x,i)/fact;
}
printf("sum is=%f",sum);
}
