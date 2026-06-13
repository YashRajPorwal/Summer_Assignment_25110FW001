#include<stdio.h>
int main(){
    int a[]={18,45,17,23,7};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}