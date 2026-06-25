#include<stdio.h>
#include<string.h>
int main(){
    char names[5][10]={
        "Ronaldo",
        "Neymar",
        "Haaland",
        "Messi",
        "Mbappe"
    };
    char temp[50];
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    printf("alphabetically sorted names : \n");
    for(int i=0;i<5;i++){
        printf("%s\n",names[i]);
    }

    return 0;
}