#include <stdio.h>

int main(){
    float a,b;
    printf("Enter the number:");
    scanf("%f",&a);
    printf("Enter the number:");
    scanf("%f",&b);
    float c=a*b;
    printf("%f is the product of %f and %f",c,a,b);
    return 0;
}