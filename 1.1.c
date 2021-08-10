#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // type varName = value

    int i1;
    printf("i1 = %d\n", i1);

    // can reassign i1, but cannot redeclare i1
    i1 = 3;
    printf("i1 = %d\n", i1);

    _Bool b = 0;
    printf("Boolean: %d\n", b);

    b = false;
    printf("Boolean with Keyword: %d\n", b);

    char name[] = "Ganning Xu"; // string
    printf("Name: %s\n", name);

    double d1 = 3.4;
    return 1;
}