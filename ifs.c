#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool pizza;
    int temp;
    printf("Pizza y/n? 1 yes 0 no: ");
    scanf("%d", &temp);
    pizza = temp;
    if(pizza)
    {
        printf("test\n");
    }
}