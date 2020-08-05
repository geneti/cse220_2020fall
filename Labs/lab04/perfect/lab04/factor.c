#include <stdio.h>
int main(void) {
    printf("Give me a number to factor:\n");
    int number;
    scanf("%d", &number);
    int factor = 2;
    printf("Factors: ");
    while (factor <= number) {
        if (number % factor == 0) {
            printf("%d ", factor);
            number /= factor;
            factor = 2;
            continue;
        }
        ++factor;
    }
}
