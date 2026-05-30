#include <stdio.h>
int main(){
    int n,rem;
    printf("enter your number : ");
    scanf("%d",&n);
    int sum=0;
    int original=n;
    while(n>0){
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("sum of digits of %d = %d",original,sum);
    return 0;
}