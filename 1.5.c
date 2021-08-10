#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3] = {5, 6, 3}; // initialize all elements to zero
    // int nums[] = {5, 6, 3};  // if you add elements rn, you don't need to specify the number of elements in brackets

    // nums[0] = 5;
    // nums[3] = 2;
    // nums[9] = 3;

    // printf("the first element is %d\n", nums[0]);

    int numsTable[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    // arrays have fixed size
    // if you want to add more elements, you need to reinitialzie the array

    printf("%d\n", numsTable);

    return 0;
}
