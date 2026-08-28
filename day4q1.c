#include <stdio.h>
int main()
{
    int A=7;
    int B=4;
    A = A + B;
    B = A - B;
    A = A - B;
    printf("after swapping: A = %d, B = %d\n", A, B);
    return 0;
}