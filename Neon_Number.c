#include<stdio.h>
int main()
{
    int n,sq,r,sum=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0){
        r=sq%10;
        sum=sum+r;
        sq/=10;
    }
    if(n==sum){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}