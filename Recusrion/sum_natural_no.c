/*
   Problem: Wrie a c program to calculate the sum of the first n natural numbers using recursion. The function namaed sum().The function should call itself repeatedly until it reaches the base condition.
   Input:
   -A positive integer n.
   Output:
   -Display the sum of the first n natural numbers.
   Example:
   Input: 5
   Output: Sum=15
*/
int sum(int n){
    it(n==0)
        return 0;
    return n + sum(n-1);
}
#include <stdio.h>
int main(){
    int n,result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=sum(n);
    printf("Sum %d",result);
    return 0;
}