#include<stdio.h>
#include<string.h>
int main(){
    char str1[100]="abcd";
    char str2[]="bcda";
    strcat(str1,str1);
    if(strstr(str1,str2)!=NULL){
        printf("string is rotated");
    }
    else{
        printf("string is not rotated in correct order");
    }
    return 0;
}