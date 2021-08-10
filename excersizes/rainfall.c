#include <stdio.h>
#include <stdlib.h>

void totalByYear(double arr[5][12])
{
    double total_by_year = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            total_by_year += arr[i][j];
        }
        printf("year %d: %lf\n", i, total_by_year);
        total_by_year = 0;
    }
}

void avgByMonth(double arr[5][12])
{
    double total = 0;
    double counter = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            total += arr[j][i];
            counter += 1;
        }

        printf("avg %d: %.0lf\n", i, total / counter);
        counter = 0;
        total = 0;
    }
}

int main()
{
    double rainfall[5][12] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 12},
    };
    totalByYear(rainfall);
    avgByMonth(rainfall);
    return 0;
}
