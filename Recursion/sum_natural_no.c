int sum(int y){
    int a;
    if(y==0){
        a=0;
        return a;
    }
    else{
        return y+sum(y-1);
    }
}
#include <stdio.h>
int main(){
    int n;
    printf("Enter number upto you want to add:");
    scanf("%d",&n);
    int b=sum(n);
    printf("sum is %d",b);
    return 0;
}