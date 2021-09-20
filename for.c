#include <stdio.h>

int main()
{ 
    int max;
    scanf("%d",&max);
    int i;
    for(; max>0; max=max-2)
    {
        printf("%d\n",max);
    }
    printf("you printed %d numbers\n", i);
    return 0;
}