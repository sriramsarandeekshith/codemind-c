#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,m;
    scanf("%d%d%d",&x,&y,&z);
    m=(pow(x,y));
    printf("%d",m%z);
} 