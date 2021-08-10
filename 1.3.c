#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x = 3;
    double y = 3.5;

    float f = 5.6;
    char c = 'A';
    _Bool b = true; // using stdbook.h
    char name[] = "Ganning Xu";

    double age = 0;
    // scanf takes input
    printf("enter your age: ");
    scanf("%lf", &age);

    printf("age is now: %lf\n", age);
    printf("x is %d, y is %f\n", x, y);

    printf("f is %0.3f\n", f);
    printf("c is %c\n", c);

    printf("b is %d\n", b);
    printf("s is %s\n", name);
    return 0;
}
