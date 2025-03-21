//ax^2+bx+c
#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Enter the coefficient of a:");
    scanf("%d",&a);
    printf("Enter the coefficient of c:");
    scanf("%d",&c);
    printf("Enter the coefficient of b:");
    scanf("%d",&b);
    double d, e;
    double dis=(b*b)-(4*a*c);
    if (dis>=0){
    d=(-b-sqrt(dis))/(2*a);
    e=(-b+sqrt(dis))/(2*a);
    printf("The two values of the quadratic equation is %lf and %lf\n",d,e);
    }else{
        printf("There are no real roots");
    }
    return 0;
}