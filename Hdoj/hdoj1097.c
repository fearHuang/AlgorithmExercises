/*===========================================================================
#
#       Filename: hdoj1097.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-22 10:43:22
#  Last modified: 2016-12-22 10:43
#    Description: 
===========================================================================*/
#include <stdio.h>
int main ()
{
    int a[10][4] = {{0,0,0,0},
        {1,1,1,1},
        {2,4,8,6},
        {3,9,7,1},
        {4,6,4,6},
        {5,5,5,5},
        {6,6,6,6},
        {7,9,3,1},
        {8,4,2,6},
        {9,1,9,1}
    };
    int m,n;
    while (~scanf("%d %d", &m, &n)) {
        m=m%10;
        printf("%d\n", a[m][(n-1)%4]);
    }
}