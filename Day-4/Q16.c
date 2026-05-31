#include<stdio.h>
#include<math.h>
void armstrong(int n,int m){
    for(int i=n;i<m;i++){
        int rem,dig=0,sum=0;
        int original=i;
        int temp=i;
        int real=i;
        while(temp>0){
            temp/=10;
            dig++;
        }
        while(original>0){
            rem=original%10;
            sum+=(int)pow(rem,dig);
            original/=10;
        }
        if(real==sum){
            printf("%d ",sum);
        }
    }
}
int main(){
    int n,m;
    printf("enter lower and upper limit \n");
    scanf("%d %d",&n,&m);
    armstrong(n,m);
    return 0;
}