#include <stdio.h>

typedef struct String string;

struct String
{
    char *str;
};


int nonRepeatedChar(string compString) {
    char* cs = compString.str, csc = cs;
    int count = 0, presentLength = 0, subtractedLength = 0, i, alreadyPresent = 0, alreadySubtracted = 0;
    char present[52], subtracted[52];


    while (*cs != '\0') {
        alreadyPresent = 0;
        for (i=0; i<presentLength; i++) {
            if (*cs == present[i]) {
                alreadyPresent = 1;
            }
        }

        if (alreadyPresent == 0) {
            count++;
            continue;
        }

        alreadySubtracted = 0;
        for (i=0; i<subtractedLength; i++) {
            if (*cs == subtracted[i]) {
                alreadySubtracted = 1;
            }
        }

        if (alreadySubtracted == 0) {
            count--;
        }

        cs++;
    }
}

int main() {
    return 0;
}
