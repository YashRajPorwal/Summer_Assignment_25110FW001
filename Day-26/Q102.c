#include<stdio.h>
#include<string.h>
int main(){
    int age;
    char citizenship[200];
    printf("What Is Your Citizenship : ");
    scanf("%s",&citizenship);
    printf("Enter Your Age : ");
    scanf("%d",&age);

    if(strcmp(citizenship,"indian")==0 && age>=18){
        printf("\nYou Are Eligible For Voting\n");
    }
    else{
        printf("\nYou are Not Eligible For Voting\n");
    }
    return 0;
}