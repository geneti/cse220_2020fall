#include <stdio.h>
#define NUM_VALUES 10

void fill_array(int values[], int size);
void print_array(int values[], int size);

int main(void) {
    int values[NUM_VALUES] = {};
    fill_array(values, NUM_VALUES);
    print_array(values, NUM_VALUES);

    return 0;
}

void fill_array(int values[], int size) {
    for (int i = 0; i < size; ++i) {
        scanf("%d", &values[i]);
    }
}

void print_array(int values[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d, ", values[i]);
    }
    printf("\n");
}
