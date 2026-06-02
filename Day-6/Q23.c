#include<stdio.h>
void countSetBits(int n){
    int count=0,rem;
    if(n==0){
        printf("Number of set bits = 0");
    }
    while(n>0){
        rem=n%2;
        if(rem==1){
            count ++;
        }
        n/=2;
    }
    printf("Number of set bits = %d",count);
}
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    countSetBits(n);
    return 0;
}