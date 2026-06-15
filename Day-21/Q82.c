#include<stdio.h>
#include<string.h>
int main(){
    char str[]="virat kohli";
    int n=strlen(str);
    int i=0;
    int j=n-1;
    while(i<=j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("reversed string : ");
    fputs(str,stdout);
    return 0;
}