#include <stdio.h>

int *test()
{
    int *p;
    int a=5;
    p = &a;
    printf("%d\n",*p);
    printf("%p\n",p);
    return p;
}

int main()
{
    int *p;
    p = test();
    printf("%d\n",*p);
    printf("%p\n",p);
}
