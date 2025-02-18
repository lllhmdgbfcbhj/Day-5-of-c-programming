//write a c program to find if the given number is pallindrome using for loop
#include <stdio.h>
int main() {
    int a, reverse = 0, r, o;
    printf("Enter a number: ");
    scanf("%d", &a);
    o = a; 
    for (; a != 0; a /= 10) {
        r = a % 10;  
        reverse = reverse * 10 + r;
    }
    if (o == reverse) {
        printf("%d is a palindrome number.\n", o);
    } else {
        printf("%d is not a palindrome number.\n", o);
    }

    return 0;
}
