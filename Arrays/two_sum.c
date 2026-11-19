#include <stdio.h>
int main(){
    int arr[5]={54,7,9,23,36};
    int target;
    int i,j;
    printf("Enter targeted number;");
    scanf("%d",&target);
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]+arr[j]==target){
                printf("Indices %d %d",i,j);
            }
        }
    }
    return 0;

}