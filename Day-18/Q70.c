#include<stdio.h>
int main(){
    int a[]={45,18,7,23,17};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        int smallindex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[smallindex]){
                smallindex=j;
            }
        }
        int temp=a[i];
        a[i]=a[smallindex];
        a[smallindex]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}