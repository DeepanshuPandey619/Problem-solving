
#include<stdio.h>
#include<math.h>
void main()
{
    int i,x,fact=1,sum=1,n;
   printf("enter the value of n");
    scanf("%d", &n);
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
        sum=sum+pow(x,i)/fact;
    }
    printf("sum is =%d",sum);
}
