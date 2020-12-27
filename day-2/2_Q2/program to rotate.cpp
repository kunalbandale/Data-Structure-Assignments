#include<stdio.h>

int main() {
	
	int a[50] , n , k , temp ;
	int i , j ;
	
	printf("Enter the size of elements:");
	scanf(" %d",&n);
	
	printf("Enter elements in an array :\n");
	for(i = 0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	
	printf("Enter the number of times to be roatated :");
	scanf("%d",&k);
	
	for(i=0;i<k;i++) {
		temp = a[0];
		for(j=0;j<n-1;j++) {
			a[j]= a[j+1];
		}
		a[n-1] = temp ;
	}
	printf("Array elemts afer left roatation :");
	for(i=0;i<n;i++) {
		printf("%d",a[i]);
	}
	
	return 0 ;
}
