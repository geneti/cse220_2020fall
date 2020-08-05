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

int main(void) {
    char string[MAX_STRING_LENGTH];

    printf("Please enter a rotation amount:\n");
    int rot_amount = 13;
    scanf("%d", &rot_amount);

    printf("Please enter a string:\n");
    scanf("%s", string);

    printf("Your original string is: %s\n", string);



    rot(string, rot_amount);

    printf("The string ROT%d transformed is: %s\n", rot_amount, string);

    return 0;
}
