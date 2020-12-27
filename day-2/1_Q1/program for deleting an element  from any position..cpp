#include<stdio.h>

int main() {
	// program to delte element from any postion of an array
	
	int a[50] , size , pos  ; 
	
	printf("Enter size of array :");
	scanf("%d",&size);
	
	printf("Enter the elements in array:\n");
	for(int i = 0 ; i < size ; i++) {
		scanf("%d",&a[i]);
	}
	
	printf("Enter the postion to delte element:\n ");
	scanf("%d",&pos);
	
	if (pos<=0 || pos > size) {
		puts("Invalid element");
	} else {
		for(int i = pos - 1 ; i < size - 1 ; size ++) {
			a[i] = a[i+1];
		}
		size--;
	}
	
	for(int i = 0 ; i < size ; i ++) {
			printf("%d",a[i]);
	}
	
	return 0 ;
}
