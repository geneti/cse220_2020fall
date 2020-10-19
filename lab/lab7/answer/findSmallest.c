#include <stdio.h>
#define NUM_VALUES 10

void fill_array(int values[], int size);
void print_array(int values[], int size);
int get_smallest_value(int values[], int start, int end);
int get_smallest_value_index(int values[], int start, int end);

int main(void) {
    int start, end;
    printf("Please enter the starter_index:\n");
    scanf("%d", &start);
    printf("Please enter the end_index:\n");
    scanf("%d", &end);

    printf("Please enter the array of length 10:\n");
    int values[NUM_VALUES] = {};
    fill_array(values, NUM_VALUES);

    int smallest = get_smallest_value(values, start, end);
    printf("The smallest element = %d\n", smallest);

    int smallest_index = get_smallest_value_index(values, start, end);
    printf("The index of the smallest element = %d\n", smallest_index);
    return 0;
}

void fill_array(int values[], int size) {
    for (int i = 0; i < size; ++i) {
        scanf("%d", &values[i]);
    }
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
