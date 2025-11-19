/*Program of sorting using quick sort */

#include<stdio.h>
#define MAX 100

void quick(int arr[],int low,int up);
int partition(int arr[], int low, int up);

main()
{
	int array[MAX],n,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&array[i]);
	}

	quick(array,0,n-1);

	printf("Sorted list is :\n");

	for( i=0; i<n; i++ )
		printf("%d ",array[i]);
	printf("\n");

}/*End of main() */

void quick(int arr[],int low,int up)
{
	int pivloc;

	if(low>=up)
		return;
	pivloc = partition(arr,low,up);
	printf("\nPartition at %d\n", pivloc);
	quick(arr,low,pivloc-1); /*process left sublist*/
	quick(arr,pivloc+1,up);  /*process right sublist*/
}/*End of quick()*/

void display(int arr[], int low, int up)
{
	int i;

	for(i = low; i <= up ; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n\n");
}

int partition(int arr[], int low, int up)
{
	
	printf("\nIn Partition:\n\n");
	int temp,i,j,pivot;
	
	i=low+1;
	j=up;
	pivot=arr[low];

	printf("The array:\n\n");

	display(arr, low, up);

	printf("\nPivot = %d\n", pivot);

	while(i <= j)
	{
		while( arr[i] < pivot && i<up )    
			i++;
		
		while( arr[j] > pivot )	
			j--;
		
		if(i < j)
		{
			printf("\ni = %d j = %d\n", i, j);
			printf("%d and %d swapped!\n", arr[i], arr[j]);
			
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;

			
			i++;
			j--;

			

			display(arr, low, up);
		}
		else 
			i++;
	}
	printf("Finally: i = %d j = %d\n", i, j);
	arr[low]=arr[j];
	arr[j]=pivot;

	display(arr, low, up);
	
	return j;
}/*End of partition()*/




