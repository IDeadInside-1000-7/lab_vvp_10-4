#include <stdio.h>
int main()
{
	int num;
	printf("Enter three-digit number: ");
	scanf("%i", &num);
	if ((num < 100) || (num > 999))
	{
		printf("You should enter three-digit number!!!");
	}
	else
	{
		int n1, n2, n3;
		n1 = num / 100;
		n2 = num % 100;
		n2 = n2 / 10;
		n3 = num % 100;
		n3 = n3 % 10;
		if (((n1 < n2) && (n2 < n3)) || ((n1 > n2) && (n2 > n3)))
			printf("True");
		else
			printf("False");
	}

}