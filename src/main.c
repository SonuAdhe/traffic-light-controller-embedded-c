#include "../include/traffic_light.h"

int main(void)
{
    TrafficState state = RED;

    while (1)
    {
        switch (state)
        {
            case RED:
                redLight();
                state = YELLOW;
                break;

            case YELLOW:
                yellowLight();
                state = GREEN;
                break;

            case GREEN:
                greenLight();
                state = RED;
                break;
        }
    }

    return 0;
}