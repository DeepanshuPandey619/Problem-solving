#include<stdio.h>
void main()
{
    int n=5;
    int a[5]={1,2,3,4,6};
    int sn,sa,i=0;
    int x=n+1;
    sn=x*(x+1)/2;
    for(i=0;i<n;i++)
    {
        sa=sa+a[i];
    }
    printf("missing number is%d",sn-sa);

}
