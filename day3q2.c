#include <stdio.h>
int main()
{
    int A=2;
    int B=5;
    int C;
    C = A;
    A = B;
    B = C;
    printf("after swapping: A = %d, B = %d\n", A, B);
    return 0;
}