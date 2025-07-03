#include <stdio.h>

//incomplete

struct studentData
{
    int rollNo;
    char name[50];
    float marks;
    float percentage;
    char grade;
}s[10];


void displayGradeO(n)
{
    for(int i=0;i<n;i++)
    {
        if(s[i].percentage>90 || s[i].grade=='O')
        {
            printf("%d %s %.2f %.2f",s[i].rollNo,s[i].name,s[i].marks,s[i].percentage);
        }
    }
}

void updateStructure()
{   for(int i=0;i<n;i++)
    {   if(s[i].percentage>=90)
        {   s[i].grade='O'
        }else if(s[i].percentage>=80 && s[i].percentage<90)
        {   s[i].grade='A'

        }
        else if(s[i].percentage>=70 && s[i].percentage<80)
        {   s[i].grade='B'

        }else if(s[i].percentage>=60 && s[i].percentage<70)
        {   s[i].grade='C'

        }else if(s[i].percentage>=50 && s[i].percentage<60)
        {   s[i].grade='D'

        }else if(s[i].percentage>=40 && s[i].percentage<50)
        {   s[i].grade='E'
        }else if(s[i].percentage<40){
            s[i].grade='F'
        }
    }
}

void grade()
{   int i;
    for (i=0;i<n;i++)
    {   s[i].percentage=(s[i].marks/500)*100;
        updateStructure()
    }
}


void main() 
{
    printf("Enter the roll number:");
    scanf("%d",&rollNo);
    printf("Enter the name:");
    scanf("%s",name);
    printf("Enter the marks:");
    scanf("%d",&marks);
}