#include <stdio.h>
int main()
{
    float number;
    printf("Enter a fractional number: ");
    scanf("%f", &number);
    printf("The number in 2-digit decimal format is: %.2f\n", number);
    return 0;
}