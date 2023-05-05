#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, *p, **q;
    x = 10;
    p = &x;
    q = &p;

    printf("\n%d\n", **q);
}
