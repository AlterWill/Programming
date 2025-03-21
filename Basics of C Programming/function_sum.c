#include <stdio.h>

int sum(int a,int b){
    return a+b;
}

int numinput(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    return a;
}

int main(){
    int a,b,c;
    a=numinput();
    b=numinput();
    c=sum(a,b);
    printf("The sum of %d and %d is %d",a,b,c);
    return 0;
}