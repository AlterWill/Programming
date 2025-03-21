#include <stdio.h>

int main(){
    int i,rev=0;
    printf("Enter the number:");
    scanf("%d",&i);
    int n=i;
    while (i!=0){
        int b=i%10;
        rev=rev*10+b;
        i=i/10;
    }
    printf("The reverse of %d is %d",n,rev);
    return 0;
}