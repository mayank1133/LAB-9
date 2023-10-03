//1. Print all uppercase and lowercase alphabets.

#include <stdio.h>

int main() {
    printf("Uppercase Alphabets:\n");
    int i = 97,j = 65;

    while (i>=97&&i <= 122) {
        printf("%c\n ", i);
        i++;
    }
    printf("Lowercase Alphabets:\n");
    while (j>=65&&j <= 91) {
        printf("%c\n ", j);
        j++;
    }

    printf("\n");

    return 0;
}
