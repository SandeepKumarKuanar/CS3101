/*Program of sorting using bubble sort*/

#include <stdio.h>
#define MAX 100

main()
{
	int arr[MAX],i,j,k, temp,n,xchanges;

	printf("Enter the number of elements : ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}

	/*Bubble sort*/
	for(i=0; i<n-1; i++)
	{
		printf("Pass - %d\n\n", i+1);
		xchanges=0;
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				xchanges++;

				printf("Intermediate list is :\n");
				for(k=0; k<n; k++)
					printf("%d ",arr[k]);
				printf("\n");
			}
		}
		if(xchanges==0) /*If list is sorted*/
		{
			printf("Already sorted!\n\n");
			break;
	}	
	}

	printf("Sorted list is :\n");
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	printf("\n");
}/*End of main()*/

