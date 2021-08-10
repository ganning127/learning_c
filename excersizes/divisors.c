#include <stdio.h>
#include <stdlib.h>

void findDivisors(num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\nfinished divisors\n");
}

int main()
{

    int num = 0;
    printf("Enter a num: ");
    scanf("%d", &num);

    findDivisors(num);

    return 0;
}
