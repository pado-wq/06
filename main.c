#include <stdio.h>

void func(int x)
{
    printf("func x: value=%d, address=%p\n", x, (void *)&x);
}

int main(void)
{
    int x = 7;

    printf("main x: value=%d, address=%p\n", x, (void *)&x);
    func(x);
    func(x);

    return 0;
}