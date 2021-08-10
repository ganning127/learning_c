#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    double y = 0;

    // printf("Enter an int and a double: ");
    // scanf("%d %lf", &x, &y);
    // fflush(stdin);
    // printf("x is: %d\n", x);
    // printf("y is: %lf\n", y);

    char name[50]; // max length of 50
    printf("Enter some text: ");

    scanf("%s", name); // `name` IS already the address

    printf("Name: %s\n", name);

    return 0;
}
