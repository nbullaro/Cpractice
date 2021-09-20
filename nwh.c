#include <stdio.h>

/*int main()
{
    for (int i=0; i<11; i++)
    {
       // printf("%d\n", i);
       for(int k=i;k>=0;k--)
       {
           printf("%d ",k);
       }
    printf("\n");
    }

    return 0;
}*/

int main()
{
    int i =0;
    while(i<11)
    {
        int k = i;
        while(k>=0)
        {
            printf("%d ",k);
            k--;
        }
        i++;
        printf("\n");
    }
}