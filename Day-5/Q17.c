#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter your number : ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("Number is a perfect number");
    }
    else{
        printf("Number is not a perfect number");
    }
    return 0;
}