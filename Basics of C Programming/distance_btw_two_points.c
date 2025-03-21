#include <stdio.h>
#include <math.h>

struct distance_btw_two_points
{   float x;
    float y;
}p[2];

void main(){
    for(int i=0;i<2;i++){
        printf("Enter the x-coodinate:");
        scanf("%f",&p[i].x);
        printf("Enter the y-coodinate:");
        scanf("%f",&p[i].y);
    }
    float a=sqrt(((p[0].x-p[1].x)*(p[0].x-p[1].x))+((p[0].y-p[1].y)*(p[0].y-p[1].y)));
    printf("%0.2f is the distance between the two points",a);
}
