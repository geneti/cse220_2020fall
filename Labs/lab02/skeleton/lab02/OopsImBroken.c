#include <stdio.h>
int main(void) {
    int x;
    float y;
    printf("Enter in a decimal number with at least 2 digits after the decimal point: \n");
    scanf("%d", y);
    printf("Enter in an integer number: \n");
    scanf("%f", x);
    printf("Here is the first number with only 1 decimal place: %0.3f \nHere is the second number: %f ", &x, &y);
    return 0;
}
