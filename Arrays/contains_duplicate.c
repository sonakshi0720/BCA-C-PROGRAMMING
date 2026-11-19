#include <stdio.h>
int main(){
    int arr[4];
    int i,j;
    int found=0;
    for(i=0;i<4;i++){
        printf("/n Enter array elements: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(arr[i]==arr[j]){
                found=1;
                break;
            }
        }

    }
    if(found==1){
        printf("Duplicate number exists");
    }
    else{
        printf("Duplicate number does not exists");
    }
    return 0;
}