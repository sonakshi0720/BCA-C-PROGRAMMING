#include <stdio.h>
int main(){
    int n;
    int i;
    int fact=1;
    printf("Enter a number to find factorial:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("The factorial of given number is %d",fact);
    return 0;
}