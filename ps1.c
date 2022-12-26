#include<stdio.h>
void main()
{
    int bs,ts,allow;
    char ch;
    float hra,da,pf;
    printf("enter the basic salary \n");
    scanf("%d",&bs);
    printf("enter the grade \n");
    scanf("%s",&ch);
    hra=(20/100)*bs;
    da=(50/100)*bs;
    pf=(11/100)*bs;
    if (ch=='A')
        {allow=1700;}
    else if(ch=='B')
        {allow=1500;}
    else
        {allow=1300;}
    ts=bs+hra+da+allow-pf;
    printf("Total Salary is %d",ts);
}
