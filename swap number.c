#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The Number");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if(a>c)
        {
            printf("greatest no. is %d",a);
        }
        else
        {
            printf("greatest no. is%d",c);
        }
    }    else if(b>c)
    {
        printf("greatest no. is%d",b);
    }
    else
    {
        printf("greatest no. is%d",c);
    }
    }






