//write a c program to find of fibonacci series a given number using while loop
#include <stdio.h>

int main() {
    int num, a = 0, b = 1, nextTerm;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci series up to %d: \n", num);
    printf("%d, %d", a, b);
    nextTerm = a + b;
    while (nextTerm <= num) {
        printf(", %d", nextTerm);
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }
    printf("\n");
    return 0;
}
