#include <stdio.h>


int largest(int arr[], int n)
{
	int i;


	int max = arr[0];

	
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main()
{
	int arr[10],i,n;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements of array");
	
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}

    largest(arr,n);
	
	printf("Largest in given array is %d", largest(arr, n));
	return 0;
}
