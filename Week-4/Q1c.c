#include<stdio.h>
// standard implementation of Pascal's triangle

void main()
{
	int i, j, n = 5, t, arr[10][10];
	for (i = 0; i < n; i++)
    {
        for(t = 1; t <= 10 - i ; t++)
        {
        	printf(" ");//printing leading blank spaces
		}
        for (j = 0; j <= i; j++)
        {
        	// First and last values in every row are 1
        	if (j == i || j == 0)
        	{
        		arr[i][j] = 1;
			}
            
        	// Other values are sum of values just above and left of above
        	else
        	{
        		arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
            
        	printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

