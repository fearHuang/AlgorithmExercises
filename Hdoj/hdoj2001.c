// hodj2001
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2;
    while(~scanf("%f %f %f %f",&x1,&y1,&x2,&y2))
    {
        printf("%.2f\n",pow((pow(x2-x1,2)+pow(y2-y1,2)),0.5));
    }
}
