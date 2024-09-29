#include <stdio.h>

int lasome(int a, int b)
{

    return a + b;
}

int main()
{

    int a, b, x;

    printf("entre number a:");
    scanf("%d", &a);
    printf("entre number b:");
    scanf("%d", &b);

    x = lasome(a, b);
    printf("%d", x);
}
