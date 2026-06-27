#include<stdio.h>
#include<string.h>

#define max 50
struct Student {
    int roll;
    char name[50];
    int marks;
};
struct Student students[50];
int count=0;

void addStudents(){
    if(count>=max){
        printf("cannot add more students\n");
        return;
    }
    printf("enter roll number : ");
    scanf("%d",&students[count].roll);
    printf("enter name : ");
    scanf("%s",&students[count].name);
    printf("enter marks : ");
    scanf("%d",&students[count].marks);
    count++;
}
void displayStudents(){
    if(count==0){
        printf("no records found\n");
    }
    printf("\nroll\tname\tmarks\n");
    for(int i=0;i<count;i++){
        printf("%d\t%s\t%d\n",students[i].roll,students[i].name,students[i].marks);
    }
}
void searchStudent(){
    int roll,found=0;
    printf("enter roll number to search : ");
    scanf("%d",&roll);
    for(int i=0;i<count;i++){
        if(students[i].roll==roll){
            printf("found : %s, marks : %d\n", students[i].name, students[i].marks);
            found=1;
            break;
        }
    }
    if(!found){
        printf("student not found\n");
    }
}
void deleteStudents(){
    int roll,found=0;
    printf("enter roll number to delete : ");
    scanf("%d",&roll);
    for(int i=0;i<count;i++){
        if(students[i].roll==roll){
            for(int j=i;j<count-1;j++){
                students[j]=students[j+1];
            }
            count--;
            found=1;
            printf("student deleted successfully\n");
            break;
        }
    }
    if(!found){
        printf("student not found\n");
    }
}
int main(){
    int choice;
    while(1){
        printf("\n--- Student Record Management ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice); 
    
        switch(choice){
            case 1: addStudents(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudents(); break;
            case 5: printf("Exiting...\n"); return 0;
            default: printf("invalid choice\n");
        }    
    } 
    return 0;
}