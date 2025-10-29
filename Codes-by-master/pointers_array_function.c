#include<stdio.h>
#include<string.h>

int findMaxArray(int *array, int size)
{
    int i, max = array[0];

    for(i = 0; i < size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    return max;

}

int main()
{
    int a[] = {5, 6, 1, 2, 9}, i;

    printf("Max = %d\n", findMaxArray(a, sizeof(a)/sizeof(int)));


	return 0;
}