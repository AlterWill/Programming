#include <stdio.h>

int numinput(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    return a;
}

int factorial(int a){
    int f=1;
    for (int i=1;i<a+1;i++){
        f=f*i;
    }
    return f;
}

int main(){
    int a,f;
    a=numinput();
    f=factorial(a);
    printf("The factorial of %d is %d",a,f);
    return 0;
}