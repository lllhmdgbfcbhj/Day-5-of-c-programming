//Write a C program to reversing the given number using for loop
#include <stdio.h>
int main() {
    int a, r = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (; a != 0; a /= 10) {
        rem = a % 10;
        r = r * 10 + rem; 
    }
    printf("Reversed number: %d\n", r);
    return 0;
}

