#include <stdio.h>
int main() 
{
    int num1,num2,nextnum,i;
    num1= 0;
    num2= 1;
    printf("Fibonacci Series:");
    for(int i = 1;i<= 15;i++)
    {
        printf("%d\n",num1);
        nextnum=num1+num2;
        num1=num2;num2=nextnum;
    }
    return 0;
}
