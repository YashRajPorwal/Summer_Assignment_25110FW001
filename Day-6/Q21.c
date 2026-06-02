#include<stdio.h>
void decimalToBinary(int n){
    int i=0;
    int binary[200];
    if(n==0){
        printf("Binary = 0");
    }
    while(n>0){
        binary[i]=n%2;
        n/=2;
        i++;
    }
    printf("Binary = ");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
}
int main(){
    int n;
    printf("enter your decimal number : ");
    scanf("%d",&n);
    decimalToBinary(n);
    return 0;
}