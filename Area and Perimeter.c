#include <stdio.h>
int main()
{
    int Length, Breadth, Area, Perimeter;
    printf ("Enter the Length");
    scanf ("%d", & Length);
    printf ("Enter the Breadth");
    scanf ("%d", & Breadth);
    Area = Length*Breadth;
    printf ("Area of Rectangle is %d", Area);
    Perimeter = 2*(Length+Breadth);
    printf ("Perimeter of Rectangle is %d", Perimeter);
    return 0;
}
