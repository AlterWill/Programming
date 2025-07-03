#include <stdio.h>

struct a {
    int a[50];
}s[50],sum;

void main(){
  int n,no,i,j;
  printf("Enter the degree of the polynomial:");
  scanf("%d",&n);
  printf("Enter the number of polynomial:");
  scanf("%d",&no);
  for(i=0;i<no;i++){
    for(j=0;j<n;j++){
      printf("Enter the coeffienct of degree %d of polynomial %d:",j+1,i+1);
      scanf("%d",&s[i].a[j]);
    }
  }
  for(i=0;i<no+1;i++){
      printf("+-");
  }printf("+");
  for(i=0;i<no;i++){
    printf("\n|");
    for(j=0;j<n;j++){
      printf("%d|",s[i].a[j]);
    }printf("\n");
    for(int k=0;k<no+1;k++){
      printf("+-");
    }printf("+");
  }
  for(i=0;i<no;i++){
    for(j=0;j<n;j++){
      sum.a[j]+=s[i].a[j];
    }
  }
  printf("\n|");
  for(i=0;i<no+1;i++){
    printf("%d|",sum.a[i]);
  }printf("\n");
  for(i=0;i<no+1;i++){
      printf("+-");
  }printf("+\n");
}
