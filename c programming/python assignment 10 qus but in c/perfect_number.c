#include <stdio.h>

int main(){
    int a,sum=0;
    printf("Enter the number:");
    scanf("%d",&a);
    int b=(a/2)+1;
    for(int i=1;i<b;i++){
        if (a%i==0){
            sum+=i;
        }
    }
    if (sum==a){
        printf("The %d is a perfect number",a);
    }else{
        printf("The %d is not a perfect number",a);
    }
    return 0;
}