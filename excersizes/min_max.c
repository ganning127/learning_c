#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number: ");
    int min = 0;
    int max = 0;
    int user = 0;

    scanf("%d", &user);

    min = user;
    max = user;

    for (int i = 0; i < 9; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &user);

        if (user > max)
        {
            max = user;
        }
        if (user < min)
        {
            min = user;
        }
    }

    printf("min: %d\n", min);
    printf("max: %d\n", max);
    return 0;
}
