#include<stdio.h>
#include<string.h>

char* convert_to_words(int N) {
    int t1, t2;
    char* t3;

    switch (N) {
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        case 10: return "ten";
        case 11: return "eleven";
        case 12: return "twelve";
        case 13: return "thirteen";
        case 14: return "fourteen";
        case 15: return "fifteen";
        case 16: return "sixteen";
        case 17: return "seventeen";
        case 18: return "eighteen";
        case 19: return "nineteen";
        case 20: return "twenty";
        case 30: return "thirty";
        case 40: return "forty";
        case 50: return "fifty";
        case 60: return "sixty";
        case 70: return "seventy";
        case 80: return "eighty";
        case 90: return "ninety";
        case 100: return "hundred";
        case 1000: return "thousand";
    };

    if (N > 1000) {
        return strcat(strcat(convert_to_words(N/1000), " thousand "), convert_to_words(N%1000));
    } else if (N > 100) {
        return strcat(strcat(convert_to_words(N/100), " hundred "), convert_to_words(N%100));
    } else if (N > 10) {
        t1 = N/10;
        t1 = t1 * 10;
        t2 = N%10;
        printf("%d %d %d", N, t2, t1);
        t3 = strcat(convert_to_words(t1), convert_to_words(t2));
        printf("abcd%s", t3);
        return t3;
    }
}

void main() {
    int N, x = 97;
    printf("Abc %c", (char) x);
    char t, *words;
    scanf("%d", &N);
    words = convert_to_words(N);
    printf("%s", words);
}
