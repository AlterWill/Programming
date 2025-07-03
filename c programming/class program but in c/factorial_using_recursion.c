#include <stdio.h>

int factorial(int a){
    if (a==1){
        return 1;
    }else{
        return a*factorial(a-1);
    }
}

int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    int b=factorial(a);
    printf("Factorial of the number %d is %d",a,b);
    return 0;
}