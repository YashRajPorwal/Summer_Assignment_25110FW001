#include<stdio.h>
void checkPrime(int n){
    int prime=1;
    if(n>2){
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                prime=0;
            }
        }
        if(prime==1){
            printf("%d is prime",n);
        }
        else{
            printf("%d is not prime",n);
        }
    }
    else{
        printf("%d is not prime",n);
    }

    
}
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    checkPrime(n);
    return 0;
}