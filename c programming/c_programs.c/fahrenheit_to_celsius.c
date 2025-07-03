//for f to c c=(f-32)*(5/9)
#include <stdio.h>

int main(){
    int f;
    printf("Enter the temperture:");
    scanf("%d",&f);
    float c=(f-32)*(5.0/9.0);
    printf("The temperture in fahrenheit is %d\nThe temperture in celsius is %0.3f",f,c);
    return 0;
}