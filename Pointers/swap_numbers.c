#include <stdio.h>
int main(){
    int a;
    int b;
    int temp;
    int *p = &a;
    int *q = &b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("After swapping \n ");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}