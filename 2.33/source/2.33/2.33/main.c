#include <stdio.h>  
#include <stdlib.h>  

int main(void)
{
	int v, w, x, y, z;
	printf("Enter your total miles driven per day:");
	scanf_s("%d", &v);
	printf("Enter your cost per gallon of gasoline:");
	scanf_s("%d", &w);
	printf("Enter your average miles per gallon:");
	scanf_s("%d", &x);
	printf("Enter your parking fees per day:");
	scanf_s("%d", &y);
	printf("Enter your tolls per day:");
	scanf_s("%d", &z);
	printf("Your total cost per day is %d",v/w*x+y+z);
system("pause");
return 0;
}