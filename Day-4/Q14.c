#include<stdio.h>
int fibo(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    fibo(n);
    printf("%dth fibonacci number : %d ",n,fibo(n));
    return 0;
}