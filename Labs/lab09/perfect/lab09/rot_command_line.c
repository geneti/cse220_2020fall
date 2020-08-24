#include <stdio.h>
#define MAX_STRING_LENGTH 100

void rot(char * string, int rot_amount) {
    for (char * p = string; *p != '\0'; ++p) {
        if (*p < 'a' || *p > 'z') {
            printf("ERROR!!!!!");
            return;
        }
        int ord = *p - 'a';
        ord += rot_amount;
        if (ord >= 26) {
            ord -= 26;
        }
        *p = ord + 'a';

    }
}

int main(int argc, char * argv[]) {
    printf("Arguments: ");
    for (int i = 0; i < argc; ++i) {
        printf("%s ", argv[i]);
    }
    printf("\n");

    int rot_amount = 13;
    if (argc >= 2) {
        sscanf(argv[1], "%d", &rot_amount);
    } else {
        printf("Please enter a rotation amount:\n");
        scanf("%d", &rot_amount);
    }

    char string_array[MAX_STRING_LENGTH];
    char * string = string_array;
    if (argc >= 3) {
        string = argv[2];
    } else {
        printf("Please enter a string:\n");
        scanf("%s", string);
    }

    printf("Your original string is: %s\n", string);

    rot(string, rot_amount);

    printf("The string ROT%d transformed is: %s\n", rot_amount, string);

    return 0;
}
