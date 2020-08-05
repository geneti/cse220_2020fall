#include <stdio.h>
int main(void) {
    float velocity, acceleration, time;
    printf("What is the velocity (in m/s)?\n");
    scanf("%f", &velocity);
    printf("What is the acceleration (in m/s^2)?\n");
    scanf("%f", &acceleration);
    printf("What is the time (in s)?\n");
    scanf("%f", &time);

    float distance = (acceleration * time * time / 2) + velocity * time;

    printf("The initial velocity is: %f m/s\n", velocity);
    printf("The acceleration is: %f m/s2\n", acceleration);
    printf("The total distance travelled after %f seconds is: %f meters\n", time, distance);
    return 0;
}
