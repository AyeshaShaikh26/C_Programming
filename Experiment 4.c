/*
Name: Ayesha Ilias Shaikh
UIN: 251M024
Class: Mechanical
Div: F
Rollno: 21
*/
#include <stdio.h>
 
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int lower, upper;
    printf("Enter First Number: ");
    scanf("%d", &lower);
    printf("Enter Second Number: ");
    scanf("%d", &upper);

    printf("Prime Numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    return 0;
}
