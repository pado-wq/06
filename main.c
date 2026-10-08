#include <stdio.h>

int square(int a)
{
    return a * a;
}

int main(void)
{
    int a = 2;
    a = square(a);
    printf("a=%d\n", a);

    return 0;
}