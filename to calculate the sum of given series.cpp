#include <stdio.h>
int main() {
    int n;
    int count = 1;  
    int term = 2;   
    int sum = 0;   
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    while (count <= n) {
        sum += term;   
        term += 3;     
        count++;       
    }
    printf("The sum of the series up to %d terms is: %d\n", n, sum);
    return 0;
}

