#include<stdio.h>
int sumOfDigits(int n){
    int rem,sum=0;
    if(n==0){
        return 0;
    }
    return (n%10)+sumOfDigits(n/10);
    
}
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    printf("sum of digits = %d",sumOfDigits(n));
    return 0;
}