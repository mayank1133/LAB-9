//1. Print sum of series 1 � 2 + 3 � 4 + 5 � 6 + 7 � n

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int sign = 1;  // Initialize the sign to positive
     i = 1;  // Initialize the current number to 1

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += sign * i;
        sign = -sign;  // Change the sign for the next number
        i++;  // Increment the current number
    }

    printf("Sum of the series is: %d\n", sum);

    return 0;
}
