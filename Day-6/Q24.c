#include<stdio.h>
int main(){
    int n,x,ans=1;
    printf("enter your base : ");
    scanf("%d",&n);
    printf("enter your exponent : ");
    scanf("%d",&x);
    if((n==0 && x==0) || (n==0 && x!=0)){
        printf("%d^%d = %d",n,x,0);
    }
    else if(n!=0 && x==0){
        printf("%d^%d = %d",n,x,1);
    }
    else if(n>0 && x>0){
        for(int i=1;i<=x;i++){
        ans*=n;
        }
    printf("%d^%d = %d",n,x,ans);
    }
    

    return 0;
}