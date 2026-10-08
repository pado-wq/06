#include <stdio.h>
#include <stdlib.h>

int get_integer(const char *message);
int factorial(int n);
int combination(int n, int r);

int main(void)
{
    int n = get_integer("n 입력: ");
    int r = get_integer("r 입력: ");

    if (n < 0 || n > 12 || r < 0 || r > n) {
        printf("0 <= r <= n <= 12 범위로 입력하세요.\n");
        return 1;
    }

    printf("C(%d, %d) = %d\n", n, r, combination(n, r));
    return 0;
}

int get_integer(const char *message)
{
    int value;

    printf("%s", message);
    if (scanf("%d", &value) != 1) {
        printf("정수를 입력해야 합니다.\n");
        exit(1);
    }

    return value;
}

int factorial(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
        result *= i;

    return result;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}