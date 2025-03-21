#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (int i=2;i<=n;i++){
        int flag=0;
        int b=(i/2)+1;
        for (int j=2;j<=b;j++){
            if (i%j==0){
                flag=1;
                break;
            }            
        }
        if (flag==0){
            printf("%d ",i);
        }
    }
    return 0;
}