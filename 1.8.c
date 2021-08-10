#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int x = 0;

    // printf("Enter a #: ");
    // scanf("%d", &x); // addr of x
    // if (x > 5 && x < 10)
    // {
    //     printf("you are a big boy\n");
    // }
    // else
    // {
    //     printf("you are a smol boy\n");
    // }

    // switch (x)
    // {
    // case 11:
    //     printf("x is 11\n");
    //     break;
    // case 12:
    //     printf("x is 12\n");
    //     break;
    // case 13:
    //     printf("x is 13\n");
    //     break;
    // default:
    //     printf("none of the above was true....\n");
    // };

    int x = 4;
    int y = 3;
    int max = (x > y) ? x : y;

    // if (x > y)
    // {
    //     max = x;
    // }
    // else
    // {
    //     max = y;
    // }
    printf("max: %d\n", max);
    return 0;
}
