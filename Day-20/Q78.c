#include<stdio.h>
int main(){
    int a[200][200];
    int r,c;
    int b[200][200];
    int check=1;
    printf("enter number of rows : ");
    scanf("%d",&r);
    printf("enter number of columns : ");
    scanf("%d",&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter element number %d,%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    if(r!=c){
        printf("matrix is not symmetric");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            b[j][i]=a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]!=b[i][j]){
                check=0;
                break;
            }
        }
    }
    if(check==1){
        printf("matrix is symmetric");
    }
    else{
        printf("matrix is not symmetric");
    }
    
    return 0;
}