#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 2;
    int y = 3;

    printf("x / y: %lf\n", x / y); // x and y are both int, so this returns 0
    printf("x / y (with casting): %lf\n", (double)x / (double)y);

    int i = 0;

    printf("i (using post inc): %d\n", i++); // prints i, then does the increment *POST*
    printf("i (using pre inc): %d\n", ++i);  // does the increment, then prints i *PRE*

    printf("1 == 1 && 2 == 2: %d\n", 1 == 1 && 2 == 2); // 1 = true, 0 = false
    return 0;
}
