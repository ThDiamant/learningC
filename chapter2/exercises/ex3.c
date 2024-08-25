#include <stdio.h>
#define PI 3.14

int main(void) {
    float volume;
    int radius;

    printf("Enter sphere radius: ");
    scanf("%d", &radius);
    volume = (4.0f/3.0f) * PI * radius * radius * radius;

    printf("Volume (cubic meters): %.1f\n", volume);


    return 0;
}