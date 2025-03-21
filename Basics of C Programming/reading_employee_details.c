#include <stdio.h>

struct 
{   char employee_name[50];
    int employee_id;
    int employee_salary;
}s[50];

void main(){
    int n;
    printf("Enter the number of employee:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the employee name:");
        scanf("%s",s[i].employee_name);
        printf("Enter the employee ID:");
        scanf("%d",&s[i].employee_id);
        printf("Enter the employee salary:");
        scanf("%d",&s[i].employee_salary);
    }
    for(int i=0;i<n;i++){
        printf("%s has the ID %d and salary %d\n",s[i].employee_name,s[i].employee_id,s[i].employee_salary);
    }
}
