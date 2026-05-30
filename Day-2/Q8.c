#include<stdio.h>
int main(){
    int n,rem;
    printf("enter your number : ");
    scanf("%d",&n);
    int reverse=0;
    int original=n;
    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    if(original==reverse){
        printf("given number is palindrome");
    }
    else{
        printf("given number is not a palindrome");
    }
    return 0;
}