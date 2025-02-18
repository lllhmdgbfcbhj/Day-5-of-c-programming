//factorial using while loop
#include <stdio.h>
int main() {
    int n, fact= 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
    } else {
        int i = n;
        while (i > 1) {
            fact *= i;
            i--;
        }
        printf("The factorial of %d is: %d", n, fact);
    }
    return 0;
}
