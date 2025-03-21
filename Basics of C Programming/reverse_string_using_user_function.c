#include <stdio.h>

void reverse(char string[],char reverse_string[]){
    int len=0,i=0;
    while (string[len]!=0){
        len++;
    }
    for (i=0;i<len;i++){
        reverse_string[i]=string[len-i-1];
    }
    reverse_string[len]='\0';
    printf("%s\n",reverse_string);
}

void main(){
    char string[50],rstring[50];
    printf("Enter the string:");
    scanf("%s",string);
    reverse(string,rstring);
}