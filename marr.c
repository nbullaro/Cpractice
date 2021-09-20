#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i=0;i<size;i++)
    {
        printf("%d", arr[i]);
    }
}
int main()
{
    int const column = 3;
    int const row = 2;
    int grades[][column]= {
        {12,23,45},
        {64,78,89}
    };

    for(int i=0;i<row;i++)
    {
        printArray(grades[i],column);
        printf("\n");
    }

    return 0;
}