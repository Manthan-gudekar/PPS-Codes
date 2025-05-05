#include<stdio.h>
int main()
{
    float num1,num2,avg;
    
    printf("Enter First Number\t");
    scanf("%f",&num1);
    
    printf("Enter Second Number\t");
    scanf("%f",&num2);
    
    avg=(num1+num2)/2;
    printf("The avg of %f and %f is %f",num1,num2,avg);
    
    return 0;
}
