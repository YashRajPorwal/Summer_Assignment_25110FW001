#include<stdio.h>
int fibo(int n){
        if(n==1){
            return 0;
        }
        else if(n==2){
            return 1;
        }
        else{
            return fibo(n-1)+fibo(n-2);
        }
}
int  main(){
    int n;
    printf("enter number upto which you want fibonacci series : ");
    scanf("%d",&n);
    printf("fibonacci series\n");
    for(int i=1;i<=n;i++){
        printf("%d ",fibo(i));
    } 
    return 0;
}