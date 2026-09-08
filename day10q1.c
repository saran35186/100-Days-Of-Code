#include <stdio.h>
int main()
{
    float a, b, c;

    printf("enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b ,&c);

    if(a == b && b == c)
        printf("equilateral triangle");
    else if(a == b || b == c || a == c)
        printf("isosceles triangle");
    else
        printf("scalene triangle");
        
    return 0;
}