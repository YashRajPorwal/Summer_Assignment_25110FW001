#include<stdio.h>
int calculateSum(int n,int m,int sum){
    sum=n+m;
    return sum;
}
int main(){
    int n,m,sum;
    printf("enter first number : ");
    scanf("%d",&n);
    printf("enter second number : ");
    scanf("%d",&m);
    sum=calculateSum(n,m,sum);
    printf("sum of these two numbers = %d",sum);
    return 0;
}