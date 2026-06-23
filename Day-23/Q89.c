#include<stdio.h>
#include<string.h>
int main(){
    char str[]="aabbcdde";
    int i,j;
    for(i=0;str[i]!='\0';i++){
        int count=0;
        for(j=0;str[j]!=0;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==1){
            printf("first non repeating character = '%c'",str[i]);
            break;
        }
    }

    return 0;
}