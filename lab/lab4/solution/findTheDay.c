#include <stdio.h>
int main(void) {
    printf("Enter your birthdate in mm/dd/yyyy format:\n");
    int year, month, day;
    scanf("%d/%d/%d", &month, &day, &year);
    if (month < 1 || month > 12) {
        printf("Error Message: Invalid Month\n");
        return 0;
    }
    if ((month == 1 && (day<0||day>31))
    || (month == 2 && (day<0||day>28))
    || (month == 3 && (day<0||day>31))
    || (month == 4 && (day<0||day>30))
    || (month == 5 && (day<0||day>31))
    || (month == 6 && (day<0||day>30))
    || (month == 7 && (day<0||day>31))
    || (month == 8 && (day<0||day>31))
    || (month == 9 && (day<0||day>30))
    || (month == 10 && (day<0||day>31))
    || (month == 11 && (day<0||day>30))
    || (month == 12 && (day<0||day>31)) )
    {
        printf("Error Message: Invalid Day\n");
        return 0;
    }
    int mc;
    if (month==1 || month==5)mc = 0;
    if (month==2 || month==6)mc = 3;
    if (month==3 || month==11)mc = 2;
    if (month==4 || month==7)mc = 5;
    if (month==8)mc = 1;
    if (month==9 || month==12)mc = 4;
    if (month==10)mc = 6;
    
    if (month==1 || month==2) year--;
    
    int result = year + year/4 - year/100 + year/400 + mc + day;
    result = result%7;
    
    if (result == 0) {
        printf("You were born on a Sunday\n");
        return 0;
    }
    if (result == 1) {
        printf("You were born on a Monday\n");
        return 0;
    }
    if (result == 2) {
        printf("You were born on a Tuesday\n");
        return 0;
    }
    if (result == 3) {
        printf("You were born on a Wednesday\n");
        return 0;
    }
    if (result == 4) {
        printf("You were born on a Thursday\n");
        return 0;
    }
    if (result == 5) {
        printf("You were born on a Friday\n");
        return 0;
    }
    if (result == 6) {
        printf("You were born on a Saturday\n");
        return 0;
    }
    
}
