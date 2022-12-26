#include<stdio.h>
#include<math.h>
void main()
{
    float s,a,b,c,area;
    printf("enter the sides");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of a rectangle %f\n",area);
}
