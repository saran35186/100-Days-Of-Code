#include <stdio.h>
int main()
{
    float radius;
    float area;
    float circumference;
    radius = 7;
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("the area of the circle is %f\n", area);
    printf("the circumference of the circle is %f\n", circumference);
    return 0;

}