/*
  Problem: Write a c program to determine whether a given array contains any duplicate elements. The program should compare the elements and display whether a duplicate exists.
  Input: 
  -An integer n, representing the size of the array.
  -n integer elements of the array.
  Output:
  -Print duplicate found if any element occurs more than once.
  -Otherwise, print no duplicate found.
  Example:
  Input: 
  5
  1 2 3 1 5
  Output:
  Duplicate found
*/
#include <stdio.h>
int main(){
    int n;
    int arr[n],i,j;
    int found=0;
    printf("Enter array size");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                found=1;
                break;
            }
        }
    }
    if(found==1){
        printf("Duplicate found");
    }
    else{
        printf("No duplicate found");
    }
    return 0;
}