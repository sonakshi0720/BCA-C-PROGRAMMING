/*
   Program: Write a c program to calculate the sum of all digits of a given non-negative integer. The program should extract each digit of the number and add them together until all digits have been processed.
   Input:
   -A single non-negative integer n.
   Output:
   -Display the sum of all digits of the given number.
   Example:
   Input- 1234
   Output- Sum of digits = 10
*/
#include <stdio.h>
int main(){
    int n, digit, sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("Sum of digits = %d",sum);
    return 0;
}