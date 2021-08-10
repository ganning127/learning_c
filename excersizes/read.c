#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your name: ");
    char name[50] = {};

    // scanf("%s", name);
    gets(name);

    printf("Hello, %s\n", name);

    return 0;
}
