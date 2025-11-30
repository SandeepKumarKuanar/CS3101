/*
Given two sorted integer arrays A and B of lengths M and N, respectively, write a program
in C to store the intersection of A and B in another array C in O(M + N) time. You may assume that
A and B each have no repeated elements. As a comment in the program, discuss why your solution
adheres to the desired time complexity.
*/
#include<stdio.h>
#define N 3
int main(){
	int arr1[N] = {1, 3, 5};
	int arr2[N] = {2, 4, 6};
	
	int temp[N*2];
	
	/*MERGE IMPLEMENTATION*/
	int i = 0;
	int j = 0;
	int k = 0;
	int n1 = arr1[0];
	int n2 = arr2[0];
	while(i <= n1 && j <= n2){
		if( arr1[i] <= arr2[j]){
			temp[k++] = arr1[i++];
		}else{
			temp[k++] = arr2[j++];
		}
	}
	while(i <= n1) //Copy excess elements of arr1 to temp
	{
		temp[k++] = arr1[i++];
	}
	while(j <= n2) //Copy excess elements of arr2 to temp
	{
		temp[k++] = arr2[j++];
	}

	
	for(int j = 0; j < N*2; j++){
		printf("%d \n", temp[j]);
	}
	return 0;
}
