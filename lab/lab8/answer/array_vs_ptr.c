#include <stdio.h>
#include <stdbool.h>
#define MAXSIZE 50

int num_of_t(char array[], int size) {
    int num_t = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] == 't') {
            ++num_t;
        }
    }
    return num_t;
}

void replace_w(char array[], int size) {
    for (int i = 2; i < size; i += 3) {
        array[i] = 'w';
    }
}

int main(void) {
    printf("Please give a word:\n");
    char array[MAXSIZE];
    int i;
    for (i = 0; i < MAXSIZE; ++i) {
        char letter = ' ';
        scanf("%c", &letter);
        if (letter < 'a' || letter > 'z') {
            break;
        }
        array[i] = letter;
    }


    printf("The number of t's is:\n%d\n", num_of_t(array, i));
    replace_w(array, i);
    printf("The modified input is:\n");
    for(int j = 0; j < i; ++j) {
        printf("%c", array[j]);
    }
    printf("\n");
}
