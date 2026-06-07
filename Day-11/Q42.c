#include<stdio.h>
void findMax(int n,int m){
    if(n>m){
        printf("%d is maximum",n);
    }
    else if(n<m){
        printf("%d is maximum",m);
    }
    else{
        printf("both are equal");
    }
}
int main(){
    int n,m;
    printf("enter two numbers : \n");
    scanf("%d %d",&n,&m);
    findMax(n,m);
    return 0;
}