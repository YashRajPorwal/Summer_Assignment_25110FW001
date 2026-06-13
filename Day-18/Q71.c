#include<stdio.h>
void binarySearch(int a[], int target,int n){
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(a[mid]==target){
            printf("target found at index %d",mid);
            return;
        }
        else if(a[mid]>target){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
        
    }
    printf("target not found");
    return;
}
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int target;
    printf("enter number to be searched : ");
    scanf("%d",&target);
    binarySearch(a,target,n);
    return 0;
}