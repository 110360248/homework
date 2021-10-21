#include <stdio.h>  
#include <stdlib.h>  

int main(void)
{
	float x, y, z;
	printf("Enter your weight and height in meters\n");
	scanf_s("%f%f", &x, &y);
	z = x / y / y;
	printf("Your BMI is:%f\n",z);
	printf("BMI VALUES\nUnderweght:less than18.5\nNormal:between 18.5 and 24.9\nOverweight:between 25 and 29\nObese:30 or greater");
	system("pause");
	return 0;
}