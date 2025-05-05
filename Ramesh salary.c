#include<stdio.h>
int main()
{
  float basic_salary,dear,hr,gross_salary;
printf("Enter Ramesh's basic salary:");
scanf("%d"&basic_salary);
dear=0.40*basic_salary;
hr=0.20*basic_salary;
gross_salary=basic_salary+dear+hr;
printf("\n---salary details---\n");
printf("Basic salary :%2d\n",basic_salary);
printf("Dearness Allowance :%2d\n",dear);
printf("House Rent :%2d\n",hr);
printf("Gross salary :%2d\n",gross_salary);
return 0;
}
  
