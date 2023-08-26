#include<stdio.h>
int main(){
    int n,r,s,rev=0;
    scanf("%d",&n);
    s=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    //printf("%d",rev);
    if(s!=rev){
        printf("False");
    }
    else{
        printf("True");
    }
    
}
