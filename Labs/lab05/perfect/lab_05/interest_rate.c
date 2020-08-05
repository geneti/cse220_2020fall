#include <stdio.h>
#include <stdbool.h>

int main(void) {
    while (true) {
        printf("Enter loan amount ($): ");
        int loan_amount;
        scanf("%d", &loan_amount);

        if (loan_amount == 0) {
            break;
        }

        printf("Enter yearly interest rate (%%): ");
        float yearly_interest_rate;
        scanf("%f", &yearly_interest_rate);


        float interest_amount = loan_amount * yearly_interest_rate * 0.01;
        printf("Interest amount ($): %.2f\n\n", interest_amount);
    }
    return 0;
}
