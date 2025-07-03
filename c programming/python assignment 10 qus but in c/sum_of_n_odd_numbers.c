#include <stdio.h>

int main(){
    int a;
    printf("Enter the n:");
    scanf("%d",&a);
    int sum=0;
    for (int i=1;i<=a;i+=2){
        sum+=i;
    }
    printf("The sum of n odd number\'s is %d",sum);
    return 0;
}