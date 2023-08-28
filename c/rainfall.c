#include <stdio.h>

int main() {
    int r[12], i, lowestIndex = 0, highestIndex = 0, total = 0, average;

    for(i=0; i<12; i++) {
        scanf("%d", &r[i]);
    }

    for(i=0; i<12; i++) {
        total += r[i];
        if (r[i] < r[lowestIndex]) {
            lowestIndex = i;
        }
        if (r[i] > r[highestIndex]) {
            highestIndex = i;
        }
    }
    average = total / 12;

    printf("\nTotal rainfall : %d", total);
    printf("\nAverage rainfall : %d", average);
    printf("\nLowest rainfall month : %d", lowestIndex+1);
    printf("\nHighest rainfall month : %d", highestIndex+1);

    return 0;
}
