/*
   Problem: Write a c program to check whether a given number is prime or not using user defined functions named isprime().
   Input:
   -An integer n.
   Output:
   -Display whether the number is prime or not.
   Example:
   Input-5
   Output-Number is prime
*/
int isprime(int n){
    int i;
    int count=0;
    for (i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}
#include <stdio.h>
int main(){
    int a,d;
    printf("Enter a number");
    scanf("%d",&a);
    d=isprime(a);
    if(d==2)
        printf("Prime number");
    else
        printf("Not a prime number");
    return 0;
}