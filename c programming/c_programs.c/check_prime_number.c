#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=(a/2)+1;
    int flag=0;
    for (int i=2;i<b;i++){
        if (a%i==0){
            flag=1;
        }
    }
    if (flag==0){
        printf("%d is a prime number",a);
    }else{
        printf("It is not a prime number");
    }
    return 0;
}