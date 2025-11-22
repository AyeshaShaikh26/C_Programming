/*
Name :Ayesha Ilias Shaikh 
UIN :251M024
Class : Mechanical
Div : F
Rollno: 21
*/
#include <stdio.h>

int main(){
	int arr[100], n, i, largest;


	printf("Enter number of elements: ");
	scanf("%d", &n);


	printf("Enter %d elements:\n", n);
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}


	largest = arr[0];


	for(i = 1; i < n; i++) {
		if(arr[i] > largest) {
			largest = arr[i];
		}
	}


	printf("Largest element in the array = %d\n", largest);

	return 0;
}
