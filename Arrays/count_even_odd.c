/*
    Problem: Write a c program to count the total number of even and odd elements is a given array.
        Example:
        Input- [10,15,30,25,20,7]
        Output-
            Even numbers-3
            Odd numbers-3
*/
#include <stdio.h>
int main(){
    int arr[]={10,15,20,30,25,7};
    int n=6;
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
     }
    printf("Even numbers %d",even);
    printf("Odd numbers %d",odd);
    return 0;
}

            