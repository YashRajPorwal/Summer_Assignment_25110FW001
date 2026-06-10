#include<stdio.h>
int main(){
    int a[]={63,67,98,12,1,23};
    int target,idx;
    int found=0;
    printf("enter your target : ");
    scanf("%d",&target);
    for(int i=0;i<sizeof(a);i++){
        if(a[i]==target){
            found=1;
            idx=i;
        }
    }
    if(found==1){
        printf("target found at index %d",idx);
    }
    else{
        printf("target not found");
    }
    return 0;
}