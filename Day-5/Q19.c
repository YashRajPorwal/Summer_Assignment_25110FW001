#include<stdio.h>
void printFactors(int n){
    printf("factors of %d : ",n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
}
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    printFactors(n);
    return 0;
}