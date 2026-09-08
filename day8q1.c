#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    printf("uppercase alphabat");
    else if (ch >= 'a' && ch <= 'z')
    printf("lowercase alphabat");
    else if (ch >= '0' && ch <='9')
    printf("digit");
    else
    printf("special character");
    return 0;
}