#include<stdio.h>

int main() {
	
	int n , a[50] , i ;
	
	printf("Enter the size of elements:");
	scanf("%d",&n);
	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);	
	} n-- ;
	
	for ( i = 0 ; i < n ; i++) {
		a[i]=a[i+1];
	}
	
	printf("After deletion the elements are :\n");
	
	for (i=0;i<n;i++){
		printf("%d\n",a[i]);
	}

	return 0 ;
}
