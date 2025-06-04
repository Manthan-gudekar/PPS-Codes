#include<stdio.h>
int main()
{
	int num,T,i;
	printf("Enter the number:\t");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		T=num*i;
		printf("%d*%d=%d\n",num,i,T);
	}
	return 0;
}
