#include <stdio.h>

void add(int m,int n){
    int a[m][n],b[m][n],c[m][n];
    create(a,m,n);
    create(b,m,n);
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }printf("\n");
    }
}

void product(int m,int n){
    int a[m][n],b[m][n],c[m][n];
    create(a,m,n);
    create(b,m,n);
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }printf("%d\t",c[i][j]);
        }printf("\n");
    }
}

void transpose(int m,int n){
    int a[m][n],b[m][n],c[m][n];
    create(a,m,n);
    create(b,m,n);
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[j][i]=a[i][j];
            printf("%d\t",c[j][i]);
        }printf("\n");
    }
}

void create(int a[][50],int m,int n){
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element of first matrix:");
            scanf("%d",&a[i][j]);
        }
    }
}

int main()
{   int m,n,d=0;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of colomn:");
    scanf("%d",&n);
    int a[m][n],b[m][n],c[m][n];
    printf("1-add\n2-product\n3-tranpose\n");
    printf("Enter your choice");
    scanf("%d",&d);
    if (d==1){
        add(m,n);
    }else if(d==2){
        product(m,n);
    }else if(d==3){
        transpose(m,n);
    }
    return 0;
}