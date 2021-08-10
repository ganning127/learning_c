#include <stdio.h>
#include <stdlib.h>

void printArrayRow(double arr[][12], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%.0lf ", arr[i][j]);
        }
        printf("\n");
    }
}

void printArrayCol(double arr[][12], int rows, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%.0lf ", arr[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    double rainfall[5][12] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
    };

    printArrayRow(rainfall, 5, 12);
    printArrayCol(rainfall, 5, 12);

    return 0;
}
