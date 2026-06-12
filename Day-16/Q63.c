#include<stdio.h>
void sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int a[]={4,1,5,7,9,11,0,3};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,n);
    int i=0,j=n-1;
    int target=14,sum;
    while(i<j){
        sum=a[i]+a[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            printf("%d + %d makes up to 14",a[i],a[j]);
            break;
        }
    }
    return 0;
}