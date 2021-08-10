#include <stdio.h>
#include <stdlib.h>

double power(int base, int expo)
{
    double result = 1;

    for (int i = 0; i < expo; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    double num = 0;
    double powerArg = 0;
    printf("Enter a number: ");
    scanf("%lf^%lf", &num, &powerArg);
    double result = power(num, powerArg);

    printf("The result is: %.1lf\n", result);

    return 0;
}
