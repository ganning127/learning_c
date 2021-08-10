#include <stdio.h>
#include <stdlib.h>

double getAge()
{
    double age = 0;
    printf("Enter your age: ");
    scanf("%lf", &age);
    return age;
}

int getSum()
{
    int fNum = 0;
    int sNum = 0;

    printf("Enter two numbers (space delim): ");
    scanf("%d", &fNum);
    scanf("%d", &sNum);

    return fNum + sNum;
}

void byRef(int *addr)
{
    (*addr)++;
}

int main()
{

    double age = getAge();
    int sum = getSum();
    printf("age: %.0lf\n", age);
    printf("sum: %d\n", sum);

    // to change variable value in another func (without return), use pass by ref
    int y = 3;
    printf("Before func: %d\n", y);
    byRef(&y);
    printf("After func: %d\n", y);
    return 0;
}
