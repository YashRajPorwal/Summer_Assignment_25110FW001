#include<stdio.h>
void findFactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("factorial of %d = %d",n,fact);
}
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    findFactorial(n);
    return 0;
}