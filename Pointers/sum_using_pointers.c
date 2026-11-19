#include <stdio.h>
int main(){
    int a;
    int b;
    int sum;
    int *p = &a;
    int *q = &b;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    sum=*p + *q;
    printf("Sum is %d",sum);
    return 0;
}