#include <stdio.h>
#include <windows.h>
#include "../include/traffic_light.h"

void redLight(void)
{
    printf("\nRED LIGHT ON\n");
    printf("Cars STOP\n");
    Sleep(RED_TIME);
}

void yellowLight(void)
{
    printf("\nYELLOW LIGHT ON\n");
    printf("READY / SLOW DOWN\n");
    Sleep(YELLOW_TIME);
}

void greenLight(void)
{
    printf("\nGREEN LIGHT ON\n");
    printf("Cars GO\n");
    Sleep(GREEN_TIME);
}