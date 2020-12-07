#include<iostream>

int main()
{
	float h, s, sa;
	printf("enter the working hours of a month");
	scanf_s("%f", &h);
	printf("Salary amount/hour");
	scanf_s("%f", &s);
	sa = h * s;
	printf( "your salary,%f", sa);
	return(0);
}
