//count the number of digits in a number
#include<stdio.h>
#include<conio.h>
int main(){
    int a, c = 0;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a == 0) {
        printf("The number of digits in the number is: 1");
        return 0;
    }
    for (c = 0; a != 0; a = a / 10) {
        c++;
    }
    printf("The number of digits in the number is: %d", c);
    return 0;
}
