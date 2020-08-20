#include<stdio.h>

int main()
{
	int a, b,i = 1,c=0;
	printf("Enter Two Number :");
	scanf_s("%d %d", &a, &b);
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
		{
			c = i;
		}
		i++;
	}
	printf("Greatest Common Divisor = %d", c);

	return 0;
}