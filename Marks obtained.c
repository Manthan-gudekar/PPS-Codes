#include<stdio.h>
int main()
{
  int phy,chem,maths,bio;
float avg,per;
printf("Enter the marks obtained in Physics");
scanf("%d",&phy);
printf("Enter the marks obtained in Chemistry\t");
scanf("%d",&chem);
printf("Enter the marks obtained in Mathematics\t");
scanf("%d",&maths);
printf("Enter the marks obtained in Biology\t");
scanf("%d",&bio);
sum=phy+chem+maths+bio;
printf("The total marks obtainedis %d",sum);
avg=sum/4;
printf("The average is %f",avg);
per=(sum/400)*100;
printf("The percentage obtained are %f",per);
return 0;
}

