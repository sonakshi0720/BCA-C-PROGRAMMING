/*
  Problem: Write a c program to count the total no. of vowels present in a given string. The program should check each character of the string and count the vowels, regardless of whether they are uppercase or lowecase.
  Input:
  -A single string containing alphabetic characters and spaces.
  Output:
  -Display the total no of vowels present in the string.
  Example:
  Input: Hello World
  Output: Number of vowels 3
*/
#include <stdio.h>
int main(){
    char str[101];
    int i, count=0;
    printf("Enter a string:");
    scanf("%s",&str);
    for(i=0;str[i]!='0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
  }
    printf("Number of vowels %d",count);
    return 0;
}