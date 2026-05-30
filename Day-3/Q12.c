#include<stdio.h>
int gcd(int n,int m){
    while(n>0 && m>0){
        if(n>m){
            n=n%m;
        }
        else{
            m=m%n;
        }
    }
    if(n==0){
        return m;
    }
    else{
        return n;
    }
}
int main(){
    int n,m,lcm;
    printf("enter two numbers : \n");
    scanf("%d %d",&n,&m);
    gcd(n,m);
    lcm=(n*m)/gcd(n,m);
    printf("LCM of %d and %d = %d",n,m,lcm);

    return 0;
}