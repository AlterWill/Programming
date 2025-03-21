#include <stdio.h>

int main(){
    int large,small,a,b;
    printf("Enter the n:");
    scanf("%d",&a);
    printf("Enter the number:");
    scanf("%d",&b);
    large=small=b;
    for (int i=1;i<a;i++){
        printf("Enter the number:");
        scanf("%d",&b);
        if (large<b){
            large=b;
        }
        if (small>b){
            small=b;
        }
    }
    printf("The smallest number of the list of number is %d \n",small);
    printf("The largest number of the list of number is %d",large);
    return 0;
}