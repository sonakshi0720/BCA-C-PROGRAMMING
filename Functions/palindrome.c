/*
   Problem: Write a c program to check whether a given integer is a palindrome or not using a user-defined function named ispalindrome(). A palindrome number is a number that reamins the same when its digits are reversed.
   Input:
   -A non-negative integer n.
   Output:
   -Print palindrome number if the number is a palindrome.
   -Otherwise, print not a palindrome number.
   Example:
   Input: 121
   Output: Palindrome Number
*/
int ispalindrome(int n){
    int original, reversed=0, remainder;
    original=n;
    while(n>0){
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
    if(original==reversed)
        return 1;
    else
        return 0;
}
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int d = ispalindrome(n);
    if(d==1)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");
    return 0;
}