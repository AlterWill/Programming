#include <stdio.h>

struct a {
    int a[50];
}s[50]

void main(){
  int n,no;
  printf("Enter the degree of the polynomial:");
  scanf("%d",&n);
  printf("Enter the number of polynomial");
  scanf("%d",&no);
  for(int i=0;i<no;i++){
    for(int j=0;j<n;j++){
      printf("Enter the coeffienct of degree %d",j+1);
      scanf("%d",&s[i].a[j]);
    }
  }
  for(i=0;i<no;i++){
    for(j=0;j<n;j++){
     printf("%d",s[i].a[j]);
    }
  }
}
