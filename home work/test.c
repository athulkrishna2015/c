#include<stdio.h>
int main()
{
    printf("sum of 2 numbers \n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("sum of %d and %d is equals to %d\n",a,b,a+b);
    printf("differnce of 2 numbers \n");
    scanf("%d %d",&a,&b);
    printf("difference of %d and %d is equals to %d\n",a,b,a-b);
    printf("muliplication of 2 numbers \n");
    scanf("%d %d",&a,&b);
    printf("multiplication of %d and %d is equals to %d\n",a,b,a*b);
    printf("division of 2 numbers \n");
    float c,d;
    scanf("%f %f",&c,&d);
    printf("division of %f and %f is equals to %f\n",c,d,c/d);
    printf("modulus division of 2 numbers \n");
    scanf("%d %d",&a,&b);
    printf("modulus division of %d and %d is equals to %d\n",a,b,a%b);
    return 0;
}
