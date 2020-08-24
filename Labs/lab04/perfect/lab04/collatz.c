#include <stdio.h>
int main(void) {
    printf("Give me a number to start:\n");
    int number;
    scanf("%d", &number);
    int steps = 0;
    while (1) {
        if (number == 1) {
            break;
        }
        if (number % 2 == 0) {
            printf("%d is even.\n", number);
            number /= 2;
        } else {
            printf("%d is odd.\n", number);
            number *= 3;
            ++number;
        }
        printf("Next number is %d.\n", number);

        ++steps;
    }
    printf("That took %d steps.\n", steps);
}
