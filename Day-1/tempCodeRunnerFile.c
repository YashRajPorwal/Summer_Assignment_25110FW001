#include<stdio.h>
int main(){
    int n,rem;
    int digits=0;
    printf("enter your number : ");
    scanf("%d",&n);
    int original=n;
    while(n>0){
        rem=n%10;
        digits++;
        n/=10;
    }
    printf("number of digits in %d = %d",original,digits);
    return 0;
}