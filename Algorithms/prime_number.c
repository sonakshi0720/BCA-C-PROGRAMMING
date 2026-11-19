#include <stdio.h>
int main(){
    int n;
    int i;
    int count=0;
    printf("Enter a number to check whether it is prime or not");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("It is a prime number");
    }
    else{
        printf("It is not a prime number");
    }
    return 0;
}