#include <stdio.h>
void main(){
int yr;
printf("Enter the year=");
scanf("%d",&yr);
if(yr%400==0){
printf("the year is lwap year= %d",yr);
}
else if(yr%100==0){
printf("not a leap year%d",yr);
}
else if(yr%4==0){
printf("leap year%d",yr);
}
else {
printf("not leap year%d",yr);
}
}