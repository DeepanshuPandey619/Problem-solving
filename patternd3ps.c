#include<stdio.h>
int main()
{

    int i,j,n;
    printf("enter the limit");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {

        for(j=0;j<i;j+2)
        {
            printf("%c",65+j);
        }
        printf("\n");
    }
}

