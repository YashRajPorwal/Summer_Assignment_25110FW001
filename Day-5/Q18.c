#include<stdio.h>
void checkStrong(int n){
    int sum=0,dig;
    int original=n;
    while(n>0){
        dig=n%10;
        int fact=1;
        for(int i=1;i<=dig;i++){
            fact*=i;
        }
        sum+=fact;
        n/=10;
    }
    if(sum==original){
        printf("Number is a strong number");
    }
    else{
        printf("Number is not a strong number");
    }
}
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    checkStrong(n);
    return 0;
}