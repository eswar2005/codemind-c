#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,t,f;
    scanf("%d%d%d",&x,&y,&m);
    t=pow(x,y);
    f=t%m;
    printf("%d",f);
    
}