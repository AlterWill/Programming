#include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter the number:");
    scanf("%f",&a);
    printf("Enter the number:");
    scanf("%f",&b);
    printf("The value of a and b are %f and %f\n",a,b);
    c=b;
    b=a;
    a=c;
    printf("The value of a and b are %f and %f",a,b);
    return 0;
}