/*
Given a sorted (ascending) array (length n) of positive integers (e.g., {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}), write a program to check if a given sum (e.g., 19) exists between two elements (here, between 9 and 10) in O(n) time.
*/
#include <stdio.h>

#define MAX_SIZE 10

int main(){
    int arr[MAX_SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int target_sum;
    printf("Array elements: ");
    for(int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the target sum: ");
    scanf("%d", &target_sum);
    int left = 0;
    int right = MAX_SIZE - 1;
    
    for(; left < right; ) {
        int current_sum = arr[left] + arr[right];
        if(current_sum == target_sum) {
            printf("Found the sum %d between elements %d and %d\n", target_sum, arr[left], arr[right]);
            return 0;
        } else if(current_sum < target_sum) {
            left++; //moves the left pointer leftwards if current_sum lesser than target_sum
        } else {
            right--; // moves the right pointer leftwards if current_sum greater than target_sum
        }
    }
    // If loop finishes without finding sum
    printf("Sum %d not found in the array.\n", target_sum);
    return 0;
}