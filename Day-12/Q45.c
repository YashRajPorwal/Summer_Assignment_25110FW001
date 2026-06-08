#include<stdio.h>
void checkPalindrome(int n){
    int rem,reverse=0;
    int original=n;
    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    if(original==reverse){
        printf("entered number is palindrome");
    }
    else{
        printf("entered number is not palindrome");
    }
}
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    checkPalindrome(n);
    return 0;
}