#include<stdio.h>
void main()
{
    float bs,hra,da,gs;
    printf("enter the basic salary");
    scanf("%f",&bs);
    da =(40*bs)/100;
    hra =0.2*bs;
    gs =bs+da+hra;
    printf("Basic salary of Deepanshu %f\n",bs);
    printf("House Rent Allowance %f\n",hra);
    printf("Gross salary of Deepanshu is %f\n",gs);
}
