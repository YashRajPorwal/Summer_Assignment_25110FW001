#include<stdio.h>
int main(){
    int n,rem;
    printf("enter your number : ");
    scanf("%d",&n);
    int product=1;
    int original=n;
    while(n>0){
        rem=n%10;
        product*=rem;
        n/=10;
    }
    printf("product of digits of %d = %d",original,product);
    return 0;
}