#include <stdio.h>
#include <math.h>

int main()
{
float x1,y1,x2,y2,distance;
printf("Enter point one(x1,y1)\n");
scanf("%f %f",&x1,&y1);
printf("Enter point two(x1,y1)\n");
scanf("%f %f",&x2,&y2);
distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("distance between(%f,%f)&(%f,%f)is %f\n",x1,y1,x2,y1,distance);
return 0;
