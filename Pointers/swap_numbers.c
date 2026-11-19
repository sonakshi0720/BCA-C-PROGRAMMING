/*
    Problem statement: Write a c program to swap the values of two integer variables using pointers. The      program should use pointer variables to access and exchange the values of the two numbers without directly swapping them using their variable names.
        Input:
-Two integer numbers a and b.
        Output:
-Display the values of a and b after swapping.
    Example:
Input:
a=10
b=20
Output:
After swapping- a=20
                b=10
*/
#include <stdio.h>
int main(){
    int a,b,temp;
    int *p,*q;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("After swapping \n");
    printf("a=%d b=%d",a,b);
    return 0;
}
