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
    int n,r,nr,a,b,c;
    float fac;
    a=numinput();
    b=numinput();
    n=factorial(a);
    r=factorial(b);
    c=a-b;
    if (c<0){
        c=(c*-1);
    }
    nr=factorial(c);
    fac=n/(r*nr);
    printf("The combination of n=%d and r=%d is %0.3f  %d %d %d %d",a,b,fac,c,nr,n,r);
    return 0;
}