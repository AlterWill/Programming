#include <stdio.h>

struct rank{
	char name[50];
	int rollno;
	int totalmark;
	int rank;
}s[50],temp;

void sort(int n){
	for (int i=0;i<n-1;i++)
	{	for (int j=0;j<n-i-1;j++)
		{	if (s[j].totalmark<s[j+1].totalmark)
			{	temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
}

void main(){
	int n,i,j;
	printf("Enter the number of student:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the name of student:");
		scanf("%s",s[i].name);
		printf("Enter the rollno of student:");
		scanf("%d",&s[i].rollno);
		printf("Enter the total marks of student:");
		scanf("%d",&s[i].totalmark);
	}
	sort(n);
	int k=1;
	for(i=0;i<n;i++){
		if(i==0){
			s[i].rank=k;
			k++;
		}else if(i>0){
			if(s[i].totalmark==s[i-1].totalmark){
				s[i].rank=s[i-1].rank;
			}else{
				s[i].rank=k;
				k++;
			}
		}
	}			
	printf("+-------------------+------+---------+----+\n");
	printf("|Name of the student|Rollno|totalmark|rank|\n");
	for(i=0;i<n;i++){
		printf("+-------------------+------+---------+----+\n");
		printf("|%19s|%6d|%9d|%4d|\n",s[i].name,s[i].rollno,s[i].totalmark,s[i].rank);
	}
	printf("+-------------------+------+---------+----+\n");
}
