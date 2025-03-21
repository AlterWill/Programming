#include <stdio.h>

struct complex{
    float n1;
    float n2;
};

struct complex add(struct complex num1,struct complex num2){
    struct complex result;
    result.n1=num1.n1+num2.n1;
    result.n2=num1.n2+num2.n2;
    return result;
}

int main(){
    struct complex a,b,sum;
    printf("Enter the real part of the complex number:");
    scanf("%f",&a.n1);
    printf("Enter the imaginary parts of the complex number:");
    scanf("%f",&a.n2);

    printf("Enter the real part of the second complex number:");
    scanf("%f",&b.n1);
    printf("Enter the imainary part of the second complex number:");
    scanf("%f",&b.n2);

    sum=add(a,b);

    printf("Sum = %0.2f + %0.2fi\n",sum.n1,sum.n2);

    return 0;
}