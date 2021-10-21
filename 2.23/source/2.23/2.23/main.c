#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x;
	int y;
	int z;
	printf("Enter three intergers and I will tell you which is largest which is smallest");
	scanf_s("%d%d%d",&x,&y,&z);
	if (x > y && x > z) 
	{
		 printf("%d is the largest one\n",x);
	}
	else if (y> z)
	{
		printf("%d is the largest one\n", y);
	}
	else
	{
		printf("%d is the largest one\n", z);
	}
	if (x < y && x < z)
	{
		printf("%d is the smallest one\n", x);
	}
	else if (y < z)
	{
		printf("%d is the smallest one\n", y);
	}
	else
	{
		printf("%d is the smallest one\n", z);
	}
	system("pause");
	return 0;
}