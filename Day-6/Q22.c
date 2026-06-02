#include<stdio.h>
#include<math.h>
void binaryToDecimal(int n){
    int i=0,decimal=0;
    if(n==0){
        printf("Decimal = 0");
    }
    while(n>0){
        decimal+=n%10*pow(2,i);
        n/=10;
        i++;
    }
    printf("Decimal = %d",decimal);
}
int main(){
    int n;
    printf("enter your binary number : ");
    scanf("%d",&n);
    binaryToDecimal(n);
    return 0;
}