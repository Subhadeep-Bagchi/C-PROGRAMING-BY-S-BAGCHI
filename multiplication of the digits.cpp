#include <stdio.h> 0
int main() {
    int num, temp;
    long long product = 1;
    printf("Enter an integer number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    temp = num;
    if (temp < 0) {
        temp = -temp;
    }
    if (temp == 0) {
        product = 0;
    } else {
        while (temp > 0) {
            int digit = temp % 10;  
            product *= digit;       
            temp /= 10;             
        }
    }
    printf("The multiplication of the digits of %d is: %lld\n", num, product);
    return 0;
}

