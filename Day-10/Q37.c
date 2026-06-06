#include<stdio.h>
int main(){
    int n;
    printf("enter height of pyramid : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}