#include <stdio.h>
int main()
{
    int per;
    printf("enter the obtained marks:");
    scanf("%d",&per);
    if(per>100||per<0)
    {
    	printf("invalid marks");
	}
	else if(per>=90)
    {
    	printf(" grade obtained is excellent");
	}
	else if(per>=80)
    {
    	printf(" grade obtained is A");
	}
	else if(per>=70)
    {
    	printf(" grade obtained is B");
	}
	else if(per>=60)
    {
    	printf(" grade obtained is C");
	}
	else if(per>=50)
    {
    	printf(" grade obtained is D");
	}
	else if(per>=40)
    {
    	printf(" grade obtained is E");
	}
	else 
	{
    	printf(" grade obtained is FAIL");
	}
	return 0;
}
