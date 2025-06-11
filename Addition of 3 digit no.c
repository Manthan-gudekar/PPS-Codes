#include <stdio.h>
‎
‎int main()
‎{
‎    int num, rem1, rem2, rem3, Q1, Q2, sum;
‎
‎    printf("Enter the number: ");
‎    scanf("%d", &num);
‎
‎    rem1 = num % 10;
‎    Q1 = num / 10;
‎
‎    rem2 = Q1 % 10;
‎    Q2 = Q1 / 10;
‎
‎    rem3 = Q2 % 10;
‎
‎    sum = rem1 + rem2 + rem3;
‎
‎    printf("The sum of three digit number entered is %d\n", sum);
‎
‎    return 0;
‎}
‎