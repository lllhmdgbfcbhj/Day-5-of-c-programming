//write a c program to find if the given number is armstrong and not  using for loop
#include <stdio.h>
#include <math.h>
int main() {
    int a, o, r , sum = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    o = a;
    while (a != 0) {
        a /= 10;
        count++;
    }

    a = o;
    while (a != 0) {
        r = a % 10; 
        sum += pow(r, count);
        a /= 10;
    }
    if (sum == o) {
        printf("%d is an Armstrong number.\n", o);
    } else {
        printf("%d is not an Armstrong number.\n", o);
    }
    return 0;
}
