/*
Write a program to print the index of the first occurrence of a particular number (e.g.,3) 
in a sorted (ascending) array (e.g., 2, 2, 3, 3, 3, 4, 4, 5, 5) of length n, in O(log(n)) time.
*/
#include <stdio.h>

// Function to find first occurrence using binary search
int firstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            ans = mid;      // store answer
            high = mid - 1; // move left to find first occurrence
        }
        else if (arr[mid] > x) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted numbers (ascending):\n", n);
    for (int i = 0; i < n; i++){
        printf("next element \n");
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &x);

    int index = firstOccurrence(arr, n, x);

    if (index == -1)
        printf("Number not found.\n");
    else
        printf("First occurrence index = %d\n", index);

    return 0;
}

