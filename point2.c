#include <stdio.h>

int main()
{
    int a = 1025;
    int *p = &a;

    printf("address: %d, val = %d\n",p,*p);
    
    void *p0;
    p0 = p;
    printf("Address = %d, val =%d\n",p0,*p0);

}