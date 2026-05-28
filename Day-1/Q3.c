#include<stdio.h>
int main(){
    int n;
    printf("ENTER YOUR NUMBER : ");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("factorial of %d is %d",n,fact);
    return 0;
}