#include <stdio.h>
#include <windows.h>
#include "../include/pedestrian.h"

void pedestrianCrossing(void)
{
    printf("\n=========================\n");
    printf("PEDESTRIAN CROSSING\n");
    printf("=========================\n");

    printf("Traffic RED\n");
    printf("Walk Signal ON\n");

    Sleep(5000);

    printf("Walk Signal OFF\n");
}
