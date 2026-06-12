#include<stdio.h>
int main(){
    int a[]={18,45,7,17,1,23};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0, j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("reversed array : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }   
    return 0;
}