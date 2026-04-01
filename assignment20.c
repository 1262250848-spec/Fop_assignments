
#include <stdio.h>
int swap(int x,int y);
int swap_p(int *x,int *y);
int main() {
	swap(10,20);
	int a=35;
	int b=45;
	swap_p(&a,&b);
	return 0;
}
int swap_p(int *x,int *y) {
	int *temp;
	temp=x;
	x=y;
	y=temp;
	printf("call by reference \n");
	printf("a = %d \n",*x);
	printf("b = %d \n",*y);
}

int swap(int x, int y) {
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("call by value\n");
	printf("%d \n",x);
	printf("%d \n",y);
}