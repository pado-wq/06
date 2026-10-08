#include <stdio.h>

int sumTwo(int a, int b);
int square(int n);
int get_max(int x, int y);

int main(void)
{
    printf("sumTwo(3, 5) = %d\n", sumTwo(3, 5));
    printf("square(4) = %d\n", square(4));
    printf("get_max(7, 2) = %d\n", get_max(7, 2));

    return 0;
}

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x >= y)
        return x;
    return y;
}