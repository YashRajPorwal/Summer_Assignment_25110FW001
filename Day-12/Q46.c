#include<stdio.h>
#include<math.h>
void checkArmstrong(int n){
    int digit=0;
    int ans=0;
    int rem;
    int original=n;
    int real=n;
    while(n>0){
        n/=10;
        digit++;
    }
    while(real>0){
        rem=real%10;
        ans+=pow(rem,digit);
        real/=10;
    }
    if(ans==original){
        printf("entered number is armstrong");
    }
    else{
        printf("entered number is not armstrong");
    }
}
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    checkArmstrong(n);
    return 0;
}