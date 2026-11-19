int palindrome(int n){
    int rem;
    int a=n;
    int i;
    int rev=0;
    while(i>0){
        rem = n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    if(a==rev)
    return 1;
    else
    return 0;
}
#include <stdio.h>
int main(){
    int no;
    printf("Enter a number to check if it is palindrome or not:");
    scanf("%d",&no);
    int d=palindrome(no);
    if(d==1){
        printf("It is a palindrome number");
    }
    else{
        printf("It is not a palindrome number");
    }
    return 0;
}