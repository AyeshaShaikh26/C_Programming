/*
Name :Ayesha Ilias Shaikh 
UIN :251M024
Class : Mechanical
Div : F
Rollno: 21
*/
#include <stdio.h>

int main() {
	int a, b, sum;
	int *p1, *p2;

	printf("Enter first number: ");
	scanf("%d", &a);

	printf("\nEnter second number: ");
	scanf("%d", &b);


	p1 = &a;
	p2 = &b;


	sum = *p1 + *p2;

	printf("Sum = %d\n", sum);

	return 0;
}

