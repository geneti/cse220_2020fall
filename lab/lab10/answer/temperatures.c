#include <stdio.h>

int get_option(void);
void print_number_of_temperatures(int temperatures_size);
int add_new_temperature(int * temperatures, int temperatures_size);
void print_all_temps(int * temperatures, int temperatures_size);
void print_average_all(int * temperatures, int temperatures_size);
void print_average_last_five(int * temperatures, int temperatures_size);

int main(void) {
    int temperatures[500] = {};
    int temperatures_size = 0;

    int option = get_option();
    while (option != 6) {
        if (option == 1) {
            temperatures_size = add_new_temperature(temperatures, temperatures_size);
        } else if (option == 2) {
            print_number_of_temperatures(temperatures_size);
        } else if (option == 3) {
            print_all_temps(temperatures, temperatures_size);
        } else if (option == 4) {
            print_average_all(temperatures, temperatures_size);
        } else if (option == 5) {
            print_average_last_five(temperatures, temperatures_size);
        }

        option = get_option();
    }
    return 0;
}


void print_average_last_five(int * temperatures, int temperatures_size) {
    int sum = 0;
    int start = temperatures_size - 5;
    if (start < 0) {
        start = 0;
    }
    int num_values = 0;
    for (int i = start; i < temperatures_size; ++i, ++num_values) {
        sum += *(temperatures + i);

    }
    float average = sum * 1.0 / num_values;
    printf("Last 5 Average is %.1f.\n", average);
}

void print_average_all(int * temperatures, int temperatures_size) {
    int sum = 0;
    for (int i = 0; i < temperatures_size; ++i) {
        sum += *(temperatures + i);
    }
    float average = sum * 1.0 / temperatures_size;
    printf("Total Average is %.1f.\n", average);
}

int add_new_temperature(int * temperatures, int temperatures_size) {
    printf("What is the new temperature?\n");
    int new_temp;
    scanf("%d", &new_temp);
    *(temperatures + temperatures_size) = new_temp;
    printf("You added the temperature %d.\n", new_temp);
    return temperatures_size + 1;
}

void print_number_of_temperatures(int temperatures_size) {
    printf("There are %d temperatures recorded.\n", temperatures_size);
}

void print_all_temps(int * temperatures, int temperatures_size) {
    printf("Temperatures recorded are: [");
    for (int i = 0; i < temperatures_size; ++i) {
        printf("%d, ", *(temperatures + i));
    }
    printf("]\n");
}

int get_option(void) {
    printf("\n");
    printf("Pick one of the following options:\n");
    printf("1: Add a new temperature to the array.\n");
    printf("2: Print the number of temperatures recorded.\n");
    printf("3: Print all the temperatures recorded.\n");
    printf("4: Compute and print average of all temperatures.\n");
    printf("5: Compute and print the average of the last five temperatures added.\n");
    printf("6: Exit the program.\n");
    int i;
    scanf("%d", &i);
    printf("You chose option %d.\n", i);
    return i;
}
