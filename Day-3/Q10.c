#include<stdio.h>
int main(){
    int n,m;
    printf("enter lower limit : ");
    scanf("%d",&n);
    printf("enter upper limit : ");
    scanf("%d",&m);
    printf("prime numbers within range of %d and %d : \n",n,m);
    for(int i=n;i<=m;i++){
        int prime=1;
        if(i<2){
            prime=0;
        }
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                prime=0;
            }
        }
        if(prime==1){
            printf("%d ",i);
        }
    }
    return 0;
}