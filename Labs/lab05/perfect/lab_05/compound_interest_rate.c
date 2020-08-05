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

        printf("Enter number of years: ");
        int years;
        scanf("%d", &years);

        float total_loan_amount = loan_amount;
        while (years > 0) {
            total_loan_amount += total_loan_amount * yearly_interest_rate * 0.01;
            --years;
        }

        printf("Total loan amount ($): %.2f\n\n", total_loan_amount);
    }
    return 0;
}
