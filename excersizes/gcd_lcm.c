#include <stdio.h>
#include <stdlib.h>

int findGcd(int num1, int num2)
{
    int greatest = 0;
    for (int i = 1; i <= num1; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            greatest = i;
        }
    }

    return greatest;
}

int findLcm(int num1, int num2)
{
    int least = num1 * num2;
    int counter = 1;
    while (counter < least)
    {
        // check if both nums are divisible by the counter, and if they are, then break and return counter (lcm)
        if ((counter % num1 == 0) && (counter % num2 == 0))
        {
            least = counter;
            break;
        }
        counter++;
    }

    return least;
}
int main()
{
    int num1 = 0;
    int num2 = 0;

    printf("Enter two numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    int gcd = findGcd(num1, num2);
    printf("GCD: %d\n", gcd);
    int lcm = findLcm(num1, num2);
    printf("LCM: %d\n", lcm);

    return 0;
}
