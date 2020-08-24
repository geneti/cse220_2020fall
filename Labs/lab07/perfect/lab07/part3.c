#include <stdio.h>
#define NUM_VALUES 10

void fill_array(int values[], int size);
void print_array(int values[], int size);
int get_smallest_value(int values[], int start, int end);
int get_smallest_value_index(int values[], int start, int end);

int main(void) {
    int start, end;
    scanf("%d%d", &start, &end);

    int values[NUM_VALUES] = {};
    fill_array(values, NUM_VALUES);
    print_array(values, NUM_VALUES);

    int smallest = get_smallest_value(values, start, end);
    printf("smallest = %d\n", smallest);

    int smallest_index = get_smallest_value_index(values, start, end);
    printf("smallest index = %d\n", smallest_index);
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
