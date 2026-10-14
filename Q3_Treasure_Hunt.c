
#include <stdio.h>

int main()
{
    int treasure, x, y;
    int ben, remaining, blackbeard, pirates;

    scanf("%d %d %d", &treasure, &x, &y);

    ben = treasure * x / 100;
    remaining = treasure - ben;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    pirates = remaining / 3;

    printf("%d\n", ben);
    printf("%d\n", blackbeard);
    printf("%d\n", pirates);

    return 0;
}
