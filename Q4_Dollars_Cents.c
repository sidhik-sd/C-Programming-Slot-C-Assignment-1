
#include <stdio.h>

int main()
{
    int d1, c1, d2, c2;
    int totalCents, dollars, cents;

    scanf("%d %d %d %d", &d1, &c1, &d2, &c2);

    totalCents = (d1 * 100 + c1) + (d2 * 100 + c2);

    dollars = totalCents / 100;
    cents = totalCents % 100;

    printf("%d\n", dollars);
    printf("%d\n", cents);

    return 0;
}
