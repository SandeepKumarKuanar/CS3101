#include<stdio.h>
int main(){
  int arr[3] = {1, 2};
  printf("[");
  for(int i = 0; i < 3; i++){
    printf("%d ,", arr[i]);
  }
  printf("]");
  return 0;
}
