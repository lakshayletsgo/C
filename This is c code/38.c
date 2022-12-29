//Double Pointers
#include <stdio.h>

int main()
{
    int a;
    int *p1;
    int **p2;
    p1 = &a;
    p2 = &p1;
    a = 100;
    printf("\nValue of a (using p1): %d", *p1);
    printf("\nValue of a (using p2): %d", **p2);

    *p1 = 200;
    printf("\nValue of a: %d", *p1);

    **p2 = 200;
    printf("\nValue of a: %d", **p2);

    return 0;
}