
#include <stdio.h>

int main()
{
    int distance;
    char member[10];
    float fare = 100;

    scanf("%d %9s", &distance, member);

    if (distance > 10)
    {
        fare += (distance - 10) * 20;
    }

    if (member[0] == 't' || member[0] == 'T')
    {
        fare = fare - (fare * 10 / 100);
    }

    printf("Final Fare: Rs.%.0f\n", fare);

    return 0;
}

