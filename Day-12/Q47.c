#include<stdio.h>
int printFibonacci(int n){
    if(n>0){
        if(n==1){
            return 0;
        }
        else if(n==2){
            return 1;
        }
        else{
            return printFibonacci(n-1)+printFibonacci(n-2);
        }
    }

}
int main(){
    int n;
    printf("enter number upto which you want fibonacci series : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",printFibonacci(i));
    }
    return 0;
}