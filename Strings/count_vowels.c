#include <stdio.h>
int main(){
    char str[900];
    int i;
    int count=0;
    printf("Enter a string:");
    scanf("%s",&str);
    for(i=0;str[i]!='0';i++){
        if(str[i]=='a'||str[i]=='i'||str[i]=='o'||str[i]=='e'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    printf("Total vowels count %d",count);
    return 0;
}