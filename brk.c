#include <stdio.h>

int main()
{
    int number = 23232;
    int i =0;
    while(1)
    {
        printf("%d ", i);
        if (i==number)
        {
            printf("we found it|n");
            break;
        }
        i++;
    }
    return 0;
}