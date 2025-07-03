#include <stdio.h>

void main()
{	int n,a[50],t;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	for (int i =0;i<n;i++)
	{	printf("Enter elements:");
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){
			if (a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for (int m =0;m<n;m++)
	{	printf("%d ",a[m]);
	}	
}