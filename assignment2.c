#include<stdio.h>
void main(){
float a,b;
int op;
pritnf("Enter a : \n");
scanf("%f",&a);
printf("Enter b : \n");
scanf("%f",&b);
printf("Enter the operator (1-add,2-sub,3-multiply,4-division):");
scanf("%d",&op);
switch(op)
{
  case 1 :
    printf("additon is %d",a+b);
    break;
  case 2 :
    printf("subtraction is %d",a-b);
    break;
  case 3 :
    printf("multiplication is %d",a*b);
    break;
  case 4 :
    printf("division is %d",a/b);
    break;
    
  default :
    printf("wrong choice");
}
return 0;
}