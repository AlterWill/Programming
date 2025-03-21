#include <stdio.h>

int main(){
    int n,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        for (int j=2;j<=i/2;j++){
            if (i%j==0){
                flag=1;
            }
        }
        if (flag==0){
            printf("This %d is a prime number\n",i);
        }
    flag=0;
    }
    return 0;
}