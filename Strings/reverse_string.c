#include <stdio.h>
#include <string.h>
int main(){
    char str[]="HELLO";
    int i;
    int length= strlen(str);
    for(i=0;i<length/2;i++){
        char temp= str[i];
        str[i]= str[length-1-i];
        str[length-1-i]= temp;
    }
    printf("Reversed string %s",str);
    return 0;
}