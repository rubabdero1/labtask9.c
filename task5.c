
#include <stdio.h>

// Generic sensor function
void printSensorData(void *ptr, char type)
{
    if (type == 'f')
    {
        float *p = (float *)ptr;

        printf("Temperature = %.2f Celsius\n", *p);
    }
    else if (type == 'i')
    {
        int *p = (int *)ptr;

        if (*p == 1)
        {
            printf("Motion Detected\n");
        }
        else
        {
            printf("No Motion\n");
        }
    }
    else if (type == 'c')
    {
        char *p = (char *)ptr;

        if (*p == 'O')
        {
            printf("Door Open\n");
        }
        else if (*p == 'C')
        {
            printf("Door Closed\n");
        }
    }
}

int main()
{
    float temperature = 28.5;
    int motion = 1;
    char door = 'O';

    printSensorData(&temperature, 'f');

    printSensorData(&motion, 'i');

    printSensorData(&door, 'c');

    return 0;
}

