#include <stdio.h>
struct student {
    int roll;
    char name[100];
    float gpa;
};

int main(){
    struct student s[2];
    for(int i=0;i<=1;i++){
        printf("Enter student's details [%d]: \n",i+1);
        printf("enter roll no : ");
        scanf("%d",&s[i].roll);
        printf("enter name : ");
        scanf("%s",s[i].name);
        printf("enter gpa(1-10) : ");
        scanf("%f",&s[i].gpa);
        printf("\n");
    }
   for(int i=0;i<=1;i++){
       printf("Name[%d]:%s \n",i+1,s[i].name);
       printf("Roll No.[%d]:%d \n",i+1,s[i].roll);
       printf("GPA[%d]:%f \n",i+1,s[i].gpa);
       printf("\n");
   }
return 0;
}