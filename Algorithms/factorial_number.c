/*
   Problem: Write a c program to calculate the factorial of a given non-negative integer using a loop. The program should multiply all positive integers from 1 to the given number and display the final factorial.
   Input:
   -A single non-negative integer n.
   Output:
   -Display the factorial of the given number.
   Constraints:
   1. 0<=n<=12
   2. The input must be an integer.
   3. Use a loop to calculate the factorial.
   4. Do not use a built-in factorial function.
   Example:
   Input:5
   Output:Factorial-120
*/
#include <stdio.h>
int main(){
    int n, fact=1;
    int i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("Factorial of given no is %d",fact);
    return 0;
}