#include <stdio.h>

void add(int a[][n],int b[][n],int m,int n){
    int c[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }printf("\n");
    }
}

void product(int a[][n],int b[][n],int m,int n){
    int c[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][j]*b[i][j];
                printf("%d\t",c[i][j]);
            }printf("\n");
        }
    }
}

void transpose(int a[][n],int m,int n){
    int c[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[j][i]=a[i][j];
            printf("%d\t",c[i][j]);
        }printf("\n");
    }
}

void main()
{   int m,n,c=0;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of colomn:");
    scanf("%d",&n);
    int a[m][n],b[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element of first matrix:");
            scanf("%d",a[i][j]);
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element of second matrix:");
            scanf("%d",b[i][j]);
        }
    }
    printf("1-add\n2-product\n3-tranpose\n");
    printf("Enter your choice");
    scanf("%d",&c);
    if (c==1){
        add(a[][n],b[][n],m,n);
    }else if(c==2){
        product(a[][n],b[][n],m,n);
    }else if(c==3){
        transpose(a[][n],m,n);
    }
}