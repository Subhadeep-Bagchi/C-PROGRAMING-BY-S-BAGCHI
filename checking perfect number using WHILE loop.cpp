#include <stdio.h>
int main() {
    int number, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (i < number) {
        if (number % i == 0) {
            sum += i;
        }
        i++;
    }
    if (sum == number && number > 0) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is NOT a perfect number.\n", number);
    }

    return 0;
}

