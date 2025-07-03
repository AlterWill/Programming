#include <stdio.h>

struct hotelDetails(){
    char name[100];
    char address[100];
    char grade;
    float average_room_charge;
    int number_of_rooms;
}s[100],t;

void sort(int n){
    for(int i=0;i<n-1;i++)
    {   for(int j=0;j<n-i-1;j++)
        {   if(s[j+1].average_room_charge>s[j].average_room_charge)
            {   t=s[j+1].average_room_charge;
                s[j+1].average_room_charge=s[j].average_room_charge;
                s[j].average_room_charge=t;
            }
        }
    }
}

void displayAverageRoomChargeLessThan(int n,int a)
{   for(int i=0;i<n;i++)
    {   if(s[i].average_room_charge<a)
        {   printf("%s %s %c %f %d",s[i].name,s[i].address,s[i].grade,s[i].average_room_charge,s[i].number_of_rooms);
        }
    }
}

void main()
{   int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   printf("Enter the number of elements:");
        scanf("%d",&n);
        printf("Enter the number of elements:");
        scanf("%d",&n);
        printf("Enter the number of elements:");
        scanf("%d",&n);

    }

}