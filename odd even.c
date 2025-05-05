#include<stdio.h>
int main()
{
int num,rem;
printf("Enter the number:\t);
scanf("%d",&num);
rem=num%2
if(rem==0)
{
printf("The entered number %d is EVEN",num);
}
else{
printf("The entered number %d is ODD",num);
}
return 0.;
}
