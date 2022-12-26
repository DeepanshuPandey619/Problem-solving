
#include<stdio.h>
void main()
{

int n,i,fact=1,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
   {

    fact=fact*i;
int k=fact/i;
sum = sum+k;
   }
   printf("sum is = %d",sum);
}
