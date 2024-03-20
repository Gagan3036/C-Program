#include <stdio.h>

int main()
{   
    	int n, i, a[100], b;
    	printf("Enter The Size Of Array: ");
    	scanf("%d", &n);
    
    	printf("\nEnter The Elements: ");
	for(i=0; i<n; i++){
	scanf("%d", &a[i]);
	}
	
	printf("\nEnter The Element You Want To Search: ");
	scanf("%d", &b);
	for(i=0; i<n; i++){
	if(a[i]==b)
	printf("\n%d element found at %d position of array", b, i+1);
	else
	printf("\nEntered number not present in array");
	break;
	}
	
    	return 0;
}
