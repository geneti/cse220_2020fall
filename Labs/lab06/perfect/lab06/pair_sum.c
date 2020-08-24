#include <stdio.h>
#define max_size 50
int main(void) {

    int n = -1;
    while (n < 0 || n > 50) {
        printf("Please enter an integer between 0 and 50:\n");
        scanf("%d", &n);
        if (n >= 0 && n <= 50) {
            break;
        }
        printf("%d is not in range.\n", n);
    }

    int array[max_size] = {};

    printf("Please input %d numbers (with a newline between them):\n",
        n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
    printf("Please give me a pair-sum integer:\n");
    int pair_sum;
    scanf("%d", &pair_sum);
    printf("The following pairs sum to %d:\n", pair_sum);
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (array[i] + array[j] == pair_sum) {
                printf("%d %d\n", array[i], array[j]);
            }
        }
    }
    return 0;
}
