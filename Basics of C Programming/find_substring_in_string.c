#include <stdio.h>

void main(){
    char a[50],b[50];
    int i=0,j,flag=0,fl=0,lena=0,k=0,lenb=0,lo=0;
    printf("Enter the string:");
    scanf("%s",&a);    
    printf("Enter the substring:");
    scanf("%s",&b);
    while(a[i]!='\0'){
        lena++;
        i++;
    }
    i=0;
    while(b[i]!='\0'){
        lenb++;
        i++;
    } 
    for(i=0;i<lena;i++){
        if(a[i]==b[0]){
            k=0;
            fl=0;
            for(j=i;j<i+lenb;
                if(a[j]!=b[k]){
                    fl=1;
                    k++;
                    break;
                }else{
                    k++;
                }
            }
            if(fl==0){
                flag=1;
                lo=i;
            }
        }
    }
    if(flag==1){
        printf("The substring is present at index %d",lo+1);
    }else{
        printf("The substring is not present");
    }
}