#include <stdio.h>
int main()
{
    int a=10;
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        sum=sum+i;
    }
    printf("the sum of first %d natural numbers is %d", a, sum);
    return 0;
}