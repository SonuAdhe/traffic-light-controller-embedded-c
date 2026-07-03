#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

/* Signal Timing (Milliseconds) */
#define RED_TIME      3000
#define YELLOW_TIME   1000
#define GREEN_TIME    3000

/* Traffic Light States */
typedef enum
{
    RED,
    YELLOW,
    GREEN
} TrafficState;

/* Function Prototypes */
void redLight(void);
void yellowLight(void);
void greenLight(void);

#endif