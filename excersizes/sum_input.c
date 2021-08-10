#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum = 0;

    while (sum <= 100)
    {
        printf("Enter a number: ");
        double user = 0;
        scanf("%lf", &user);

        sum += user;
        printf("Sum is: %.1lf\n", sum);
    }

    return 0;
}
