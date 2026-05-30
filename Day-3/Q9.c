#include<stdio.h>
int main(){
    int n;
    int prime=1;
    printf("enter your number : ");
    scanf("%d",&n);
    if(n<=1){
        prime=0;
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            prime=0;
        }
    }
    if(prime==1) printf("entered number is prime");
    else printf("entered number is not prime");
    return 0;
}