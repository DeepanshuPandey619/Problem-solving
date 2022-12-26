#include<stdio.h>
void main()
{
    float temp;
    printf("enter the temperature in centigrade \n");
    scanf("%f",&temp);
    if (temp<0)

        printf("Freezing Weather");

    else if(temp>=0&&temp<10)

        printf("Very Cold Weather");

    else if(temp>=10&&temp<20)

        printf("Cold weather");

    else if(temp>=20&&temp<30)

        printf("Normal in temprature");

    else if(temp>=30&&temp<30)

        printf("Its Hot");

    else

        printf("Its very hot");

}
