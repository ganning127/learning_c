#include <stdio.h>
#include <stdlib.h>

#define NAME 3.14

int main()
{
    const int x = 10;
    double y = 3.0;

    y = NAME;
    printf("x is: %d\n", x);
    printf("y is: %lf\n", y);

    printf("Address of y: %p\n", &y);

    return 0;
}
