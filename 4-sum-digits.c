#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Iterate through each digit of the number
    while (number > 0) {
        digit = number % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        number /= 10; // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}