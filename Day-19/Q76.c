#include<stdio.h>
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int sum1=0,sum2=0,sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                sum1+=a[i][j];
            }
            else if(i+j+1==3){
                sum2+=a[i][j];
            }
        }
    }
    sum=sum1+sum2;
    for(int i=0;i<3;i++){
        sum-=a[i][i];
    }
    printf("sum of diagonal elements = %d",sum1+sum2);
    return 0;
}