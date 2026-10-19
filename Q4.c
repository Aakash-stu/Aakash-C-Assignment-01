#include <stdio.h>

int main()
{
    int d1, c1, d2, c2;
    int totalCents, dollars, cents;

    scanf("%d", &d1);
    scanf("%d", &c1);
    scanf("%d", &d2);
    scanf("%d", &c2);

    totalCents = c1 + c2;
    dollars = d1 + d2 + totalCents / 100;
    cents = totalCents % 100;

    printf("%d\n", dollars);
    printf("%d\n", cents);

    return 0;
}