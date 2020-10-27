#include <stdio.h>
#include <stdbool.h>
#define MAXSIZE 10

int main(void) {
    printf("Please enter an integer:\n");
    char array[MAXSIZE];
    int i;
    for (i = 0; i < MAXSIZE; ++i) {
        char letter = ' ';
        scanf("%c", &letter);
        if (letter < '0' || letter > '9') {
            break;
        }
        array[i] = letter;
    }
    printf("The reverse is:\n");
    for(int j = i - 1; j >= 0; --j) {
        printf("%c", array[j]);
    }
    printf("\n");
}
