#include <stdio.h>
#define NUM_VALUES 10

void fill_array(int values[], int size);
void print_array(int values[], int size);
int get_smallest_value(int values[], int start, int end);
int get_smallest_value_index(int values[], int start, int end);
void swap(int values[], int index_a, int index_b);

int main(void) {

    int values[NUM_VALUES] = {};
    fill_array(values, NUM_VALUES);

    for (int i = 0; i < NUM_VALUES; ++i) {
        int smallest_index = get_smallest_value_index(values, i, NUM_VALUES - 1);
        swap(values, i, smallest_index);
        print_array(values, NUM_VALUES);
    }
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

int get_smallest_value(int values[], int start, int end) {
    int smallest = values[start];
    for (int i = start + 1; i <= end; ++i) {
        if (values[i] < smallest) {
            smallest = values[i];
        }
    }
    return smallest;
}

int get_smallest_value_index(int values[], int start, int end) {
    int smallest = get_smallest_value(values, start, end);
    for (int i = start; i <= end; ++i) {
        if (values[i] == smallest) {
            return i;
        }
    }
    return -1;
}

void swap(int values[], int index_a, int index_b) {
    int temp = values[index_a];
    values[index_a] = values[index_b];
    values[index_b] = temp;
}
