#include <stdio.h>  
#include <stdlib.h>  

int main() 
{
	int x;
	printf("Enter a interger : ");
	 
	scanf_s("%d", &x);
	
	if (x % 2 == 0) 
	{
		printf("%d is even\n", x);
	}
	else
	{
		printf("%d is odd\n", x);
	}

	system("pause");
	return 0;
}