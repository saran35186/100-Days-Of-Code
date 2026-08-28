#include <stdio.h>
int main()
{
    int celsius=100;
    printf("enter the celsius\n");
    scanf("%d", &celsius);
    int fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("fahrenheit = %d", fahrenheit);
    return 0;
}