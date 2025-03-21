#include <stdio.h>
#include <math.h>

//1 + x^2/2 + x^4/4 + ...... + x^n/n.

int main(){
    double x,n,d,b,sum=0;
    printf("Enter the value of x:");
    scanf("%lf",&x);
    printf("Enter the value of n:");
    scanf("%lf",&n);
    for (int i=0;i<n;i++){
        b=pow(x,2*i);
        d=2*i;
        if (d==0){
            d=1;
        }
        double c=b/d;
        sum+=c;
    }
    printf("The sum of the power series is %0.3lf",sum);
    return 0;
}