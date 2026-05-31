#include<stdio.h>
#include<math.h>
void check(int n){
    int rem,dig=0;
    int sum=0;
    int original=n;
    int real=n;
    while(n>0){
        n/=10;
        dig++; 
    }
    while(original>0){
       rem=original%10;
       sum+=(int)pow(rem,dig);
       original/=10;
    }
    if(real==sum){
        printf("armstrong number");
    }
    else{
        printf("not a armstrong number");
    }
}
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    check(n);
    return 0;
}