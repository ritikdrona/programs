#include <stdio.h>
enum days {sun, mon, tue=3, wed, thu, fri, sat};

int main() {
    enum days t;
    t = thu+1;
    printf("%d", t);
    printf("%d", sun);
    printf("%d", mon);
    printf("%d", tue);
    printf("%d", wed);
    printf("%d", thu);
    printf("%d", fri);
    printf("%d", sat);
    return 0;
}
