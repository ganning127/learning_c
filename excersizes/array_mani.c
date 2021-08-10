#include <stdio.h>
#include <stdlib.h>

int findSum(int arr[10])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int findProd(int arr[10])
{
    int sum = 1;
    for (int i = 0; i < 10; i++)
    {
        sum *= arr[i];
    }

    return sum;
}

int main()
{
    int len = 10;
    int nums[len];

    // fills up the array
    for (int i = 0; i < len; i++)
    {
        printf("enter number %d: ", i);
        scanf("%d", &nums[i]);
    }

    int sum = findSum(nums);
    printf("Sum: %d\n", sum);

    int prod = findProd(nums);
    printf("Prod: %d\n", prod);
    return 0;
}
