#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the number:");
    scanf("%d",&b);
    int c=a+b;
    printf("The sum of %d and %d is %d",a,b,c);
    return 0;
}