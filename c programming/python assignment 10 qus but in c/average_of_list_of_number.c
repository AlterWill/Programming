#include <stdio.h>

int main(){
    char ch='y';
    int a,sum;
    int no=0;
    do{
        printf("Enter the numbers:");
        scanf("%d",&a);
        sum+=a;
        no++;
        if (a<0){
            ch='n';
        }
    }while (ch!='n');
    float avg=sum/no;
    printf("The average of a list of %d numbers are %0.2f",no,avg);
    return 0;
}