#include<stdio.h>
int main(){
    int a[]={5,1,3,76,10,41};
    int largest=a[0];
    int secLargest;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        if(a[i]>largest){
            int temp=largest;
            secLargest=temp;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>secLargest){
            secLargest=a[i];
        }
    }
    printf("second largest = %d",secLargest);
    return 0;
}