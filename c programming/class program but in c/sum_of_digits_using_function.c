#include <stdio.h>

void sum_digits(int a){
    int b,sum=0;
    int n=a;
    while(a!=0){
        b=a%10;
        a/=10;
        sum+=b;
    }
    printf("The sum of digits of %d is %d",n,sum);
}

int numinput(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    return a;
}

int main(){
    int a;
    a=numinput();
    sum_digits(a);
    return 0;
}