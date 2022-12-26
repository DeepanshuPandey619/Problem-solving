#include<stdio.h>
#include<stdbool.h>
bool pallindrome(int n);
bool pallindrome(int n)
{
    int r,rev=0,t;
    t=n;
    while(n>0)
    {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    }
    if(t==rev)
    {
      return true;
    }
    else
    {
     return false;
    }
}
int main()
{int n;
    printf("enter the no.");
    scanf("%d",&n);
    bool ispallindrome1 = pallindrome(n);
    if(ispallindrome1==true)
    {
        printf("pallindrome\n");
    }
    else
    {
        printf("not pallindrome\n");
    }
}
