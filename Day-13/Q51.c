#include<stdio.h>
int main(){
    int a[5]={23,5,79,12,53};
    int max=a[0];
    int min=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<5;i++){
        if(a[i]<min){
            min=a[i];
        }
    }

    printf("maximum = %d\n",max);
    printf("minimum = %d",min);
    return 0;
}