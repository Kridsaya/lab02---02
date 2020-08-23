#include<stdio.h>
int main()
{
	int x, y, z, tmp;
	printf("Enter first number : ");
	scanf_s("%d", &x);
	printf("Enter second number : ");
	scanf_s("%d", &y);

	if (x > y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}

	while (y % x != 0)
	{
		z = y % x;
		y = x;
		x = z;
	}
	printf("Greatest common divisor = %d", x);

	return 0;
}
