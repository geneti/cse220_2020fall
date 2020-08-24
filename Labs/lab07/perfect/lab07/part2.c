#include <stdio.h>
#define NUM_VALUES 10

void fill_array(int values[], int size);
void print_array(int values[], int size);
int get_smallest_value(int values[], int size);

int main(void) {
    int values[NUM_VALUES] = {};
    fill_array(values, NUM_VALUES);
    print_array(values, NUM_VALUES);
    int smallest = get_smallest_value(values, NUM_VALUES);
    printf("smallest = %d\n", smallest);
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

int get_smallest_value(int values[], int size) {
    int smallest = values[0];
    for (int i = 1; i < size; ++i) {
        if (values[i] < smallest) {
            smallest = values[i];
        }
    }
    return smallest;
}
