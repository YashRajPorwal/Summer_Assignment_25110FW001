#include<stdio.h>
int main(){
    int a[5]={3,6,8,1,0};
    int sum=0;
    float avg;
    for(int i=0;i<5;i++){
        sum+=a[i];
    }
    avg=(sum)/5.0;
    printf("sum of array = %d\n",sum);
    printf("average of array = %f",avg);
    return 0;
}