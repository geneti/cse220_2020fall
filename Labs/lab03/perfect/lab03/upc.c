#include <stdio.h>
int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    printf("Enter the first (single) digit:\n");
    scanf("%d", &d1);
    printf("Enter the first group of five digits:\n");
    scanf("%1d%1d%1d%1d%1d", &d2, &d3, &d4, &d5, &d6);
    printf("Enter the second group of five digits:\n");
    scanf("%1d%1d%1d%1d%1d", &d7, &d8, &d9, &d10, &d11);
    printf("Digits: %d %d %d %d %d %d %d %d %d %d %d\n",
            d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
    int first_sum = d1 + d3 + d5 + d7 + d9 + d11;
    int second_sum = d2 + d4 + d6 + d8 + d10;
    int total = first_sum * 3 + second_sum;
    total = total - 1;
    int remainder = total % 10;
    int check_digit = 9 - remainder;
    printf("Check digit: %d\n", check_digit);
    return 0;
}
