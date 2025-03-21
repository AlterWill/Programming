#include <stdio.h>

int main(){
    int a;
    printf("Enter the year:");
    scanf("%d",&a);
    if (a%4==0){
        if (a%100==0){
            if (a%400==0){
                printf("The year %d is a leap year",a);
            }else{
                printf("The year %d is not a leap year",a);
                }    
        }else{
            printf("The year %d is a leap year",a);
        }
    }else{
        printf("The year %d is not a leap year",a);
        }
    return 0;
}