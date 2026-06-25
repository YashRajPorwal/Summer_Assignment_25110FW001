#include<stdio.h>
#include<string.h>
int main(){
    char names[5][25]={
        "virat",
        "bhuvaneshwar",
        "gill",
        "rohit",
        "patidar"
    };
    char temp[50];
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(strlen(names[i])>strlen(names[j])){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    printf("sorted names by length : \n");
    for(int i=0;i<5;i++){
        printf("%s\n",names[i]);
    }
    return 0;

}