#include <stdio.h>
int main()
{
    int i, j, total;
    float avg[3] = {0};
    int marks[5][3] = {
        {80, 75, 90},
        {60, 70, 65},
        {78, 82, 88},
        {92, 85, 89},
        {55, 60, 58}};
    for (i = 0; i < 5; i++)
    {
        total = 0;
        for (j = 0; j < 3; j++)
        {
            total += marks[i][j];
            avg[j] += marks[i][j];
        }
        printf("Total marks of Student %d is %d\n", i + 1, total);
    }
    for (j = 0; j < 3; j++)
    {
        avg[j] = avg[j] / 5;
        printf("The Average marks of Subject %d is %.2f\n", j + 1, avg[j]);
    }
    return 0;
}