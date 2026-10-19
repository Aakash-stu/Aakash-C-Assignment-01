#include <stdio.h>

int main()
{
    int coins, x, y;
    int longBen, remaining, blackbeard, others;

    scanf("%d", &coins);
    scanf("%d", &x);
    scanf("%d", &y);

    longBen = coins * x / 100;
    remaining = coins - longBen;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    others = remaining / 3;

    printf("%d\n", longBen);
    printf("%d\n", blackbeard);
    printf("%d\n", others);

    return 0;
}