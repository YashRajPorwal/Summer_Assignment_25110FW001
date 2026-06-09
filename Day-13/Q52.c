#include<stdio.h>
int main(){
    int a[6]={34,67,21,39,59,84};
    int even=0,odd=0;
    for(int i=0;i<6;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("number of even and odd elements are respectively %d and %d",even,odd);
    return 0;
}