#include <stdio.h>
int main() 
{
    int i = 1;
    int number = 10;
    
    do
    {
        printf("%d x %d = %d\n", number, i, number*i);
        i++;
    }
    while(i <=10);
    return 0;
}
