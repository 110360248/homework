#include <stdio.h>  
#include <stdlib.h>  

int main(void)
{
	int x, y;
	printf("Enter two intergers and I will tell you if thay are multiple relationship");
	scanf_s("%d %d", &x, &y);
	if (x % y == 0 || y % x == 0)
	{
		printf("%d %d thay are multiple relationship",x,y);
	}
	else
	{
		printf("%d %d thay are not multiple relationship",x,y);
	}
	system("pause");
	return 0;
}