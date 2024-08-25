#include <stdio.h>
#define RADIUS 10 // meters
#define PI 3.14

int main(void) {
    float volume;

    volume = (4.0f/3.0f) * PI * RADIUS * RADIUS * RADIUS;

    printf("Volume (cubic meters): %.1f\n", volume);


    return 0;
}