#include <stdio.h>

int main()
{
    float mileage;
    int petrol, distance;
    float possibleDistance;

    scanf("%f", &mileage);
    scanf("%d", &petrol);
    scanf("%d", &distance);

    possibleDistance = mileage * petrol;

    if (possibleDistance >= distance)
    {
        printf("Can reach\n");
    }
    else
    {
        printf("Cannot reach\n");
    }

    return 0;
}