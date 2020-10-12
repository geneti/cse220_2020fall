#include <stdio.h>
#define MAX_SIZE 50

int get_0_to_50(int array_num);
void fill_array(int array_num, int array[], int array_size);

int main(void) {

    int array_1_size = get_0_to_50(1);
    int array_2_size = get_0_to_50(2);

    int array_1[MAX_SIZE] = {};
    int array_2[MAX_SIZE] = {};

    fill_array(1, array_1, array_1_size);
    fill_array(2, array_2, array_2_size);

    printf("The following integers appear in both arrays:\n");
    for (int i = 0; i < array_1_size; ++i) {
        for (int j = 0; j < array_2_size; ++j) {
            if (array_1[i] == array_2[j]) {
                printf("%d\n", array_1[i]);
            }
        }
    }
    return 0;
}

void fill_array(int array_num, int array[], int array_size) {
    printf("Please input %d numbers (with a newline between them) for array #%d:\n",
        array_size, array_num);
    for (int i = 0; i < array_size; ++i) {
        scanf("%d", &array[i]);
    }
}

int get_0_to_50(int array_num) {
    int n = -1;
    while (1) {
        printf("Please enter an integer between 0 and 50 for array #%d:\n", array_num);
        scanf("%d", &n);
        if (n >= 0 && n <= 50) {
            return n;
        }
        printf("%d is not in range.\n", n);
    }
}
