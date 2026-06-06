#include<stdio.h>
int main(){
    int n;
    printf("enter height of number pyramid : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int k=1;k<=i+1;k++){
            printf("%d",k);
        }
        for(int p=i;p>0;p--){
            printf("%d",p);
        }
        printf("\n");
    }
    return 0;
}