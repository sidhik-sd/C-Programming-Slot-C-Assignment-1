
#include <stdio.h>

int main()
{
    int answered, time, submitted;

    scanf("%d %d %d", &answered, &time, &submitted);

    if (answered >= 1 && time > 0 && submitted == 0)
    {
        printf("Submission Allowed");
    }
    else
    {
        printf("Submission Not Allowed");
    }

    return 0;
}
