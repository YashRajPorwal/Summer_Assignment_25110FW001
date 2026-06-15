#include<stdio.h>
int main(){
    char str[200];
    int size=0;
    printf("enter your string : ");
    scanf("%s",&str);
    while(str[size]!='\0'){
        size++;
    }
    printf("lenght of string is %d",size);

    return 0;
}