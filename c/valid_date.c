#include<stdio.h>
#include<stdlib.h>

int noOfDays[] = {
    31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31
};

int isLeap(int year) {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            return 0;
        } else {
            return 1;
        }
    } else if (year % 4 == 0)
        return 1;
    return 0;
}

int validate_date_string(char* input1) {
    int date, month, year;
    year = atoi((input1 + 6));
    input1[5] = '\0';
    month = atoi((input1 + 3));
    input1[2] = '\0';
    date = atoi((input1));

    if (month < 1 || month > 12)
        return month;
    
    int maxDate = 0;
    if (month != 2) {
        maxDate = noOfDays[month - 1];
    } else {
        if (isLeap(year) == 1) {
            maxDate = 29;
        } else {
            maxDate = 28;
        }
    }

    if (date < 0 || date > maxDate)
        return date;
    
    return 0;
}

void main() {
    int date, month, year;
    char* input1;
    // scanf("%d/%d/%d", &date, &month, &year);
    scanf("%s", input1);
    printf("%d", validate_date_string(input1));
}
