/*
  Problem: Write a c program to calculate the sum of two integer numbers using pointers. The program should use pointer variables to access the values of the two numbers and perform addition through pointer dereferencing.
  Input:
  -Two integer numbers a and b.
  Output:
  -Display the sum of the two numbers.
  Example:
  Input: 10 20
  Output: Sum=30
*/
#include <stdio.h>
int main(){
    int a,b;
    int *p,*q;
    int sum;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    sum=*p+*q;
    printf("Sum=%d",sum);
    return 0;
}