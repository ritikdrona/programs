#include <stdio.h>

char* grade_of_the_student(int input1[]) {
    int i, sum = 0;
    int avg;
    for (i = 0; i < 5; i++) {
        sum += input1[i];
    }
    avg = sum / 5;

    if (avg >= 80) {
        return "A";
    } else if (avg >= 60 && avg < 80) {
        return "B";
    } else if (avg >= 40 && avg < 60) {
        return "C";
    } else {
        return "D";
    }
}

void main() {
    int a1[] = {64, 80, 72, 75, 68},
    a2[] = {56, 20, 30, 35, 45},
    a3[] = {84, 72, 90, 92, 80},
    a4[] = {45, 64, 36, 50, 48};
    printf("%c", *grade_of_the_student(a1));
    printf("%c", *grade_of_the_student(a2));
    printf("%c", *grade_of_the_student(a3));
    printf("%c", *grade_of_the_student(a4));
}
