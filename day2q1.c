#include <stdio.h>
int main()
{
    int length = 9;
    int breadth = 6;
    int area;
    int perimeter;
    area = length * breadth;
    perimeter = 2* (length = breadth);
    printf("the area of rectangle is %d\n", area);
    printf("the perimeter of rectangle is %d\n", perimeter);
    return 0;
}