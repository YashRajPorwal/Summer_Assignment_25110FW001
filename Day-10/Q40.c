#include<stdio.h>
int main(){
    int n;
    printf("enter height of character pyramid : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char a=65;
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<i+1;k++){
            printf("%c",a);
            a++;
        }
        a--;
        a--;
        for(int p=0;p<i;p++){
            printf("%c",a);
            a--;
        }
        printf("\n");

    }
    return 0;
}