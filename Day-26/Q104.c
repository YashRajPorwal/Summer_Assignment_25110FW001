#include<stdio.h>
int main(){
    int score=0,choice;
    printf("-----QUIZ APPLICATION-----\n");

    printf("//Question 1\n Which of the following is not a feature of OOP in C++?\n");
    printf("1. Encapsulation\n");
    printf("2. Inheritance\n");
    printf("3. Polymorphism\n");
    printf("4. Compilation\n");

    printf("enter your choice : ");
    scanf("%d",&choice);

    if(choice==4){
        printf("Correct Answer!!\n\n");
        score+=5;
    }

    printf("//Question 2\n Which of the following access specifiers is not available in C++?\n");
    printf("1. Public\n");
    printf("2. Private\n");
    printf("3. Protected\n");
    printf("4. Friendly\n");

    printf("enter your choice : ");
    scanf("%d",&choice);

    if(choice==4){
        printf("Correct Answer!!\n\n");
        score+=5;
    }

    printf("//Question 3\n Which keyword is used to define a base class in C++?\n");
    printf("1. Base\n");
    printf("2. Super\n");
    printf("3. Class\n");
    printf("4. Parent\n");

    printf("enter your choice : ");
    scanf("%d",&choice);

    if(choice==3){
        printf("Correct Answer!!\n\n");
        score+=5;
    }

    printf("//Question 4\n Which type of inheritance is not supported directly by C++?\n");
    printf("1. Single\n");
    printf("2. Multiple\n");
    printf("3. Multilevel\n");
    printf("4. Hybrid\n");

    printf("enter your choice : ");
    scanf("%d",&choice);

    if(choice==4){
        printf("Correct Answer!!\n\n");
        score+=5;
    }

    printf("##QUIZ RESULT##\n");
    printf("Your Total Score = %d\n",score);
    
    if(score==20){
        printf("Perfect Score!!\nCongratulations\n");
    }
    else if(score==15){
        printf("Good Score\n");
    }
    else if(score==10){
        printf("Average Score\n");
    }
    else{
        printf("Better Luck Next Time\n");
    }
    return 0;
}