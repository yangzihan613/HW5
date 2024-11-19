#include <stdio.h>
#include <stdlib.h>

int cubeByvalue(int n);

void main()
{
	int number = 5;
	printf("The original value of number is %d\n",number);
	printf("The new value of number is %d\n", cubeByvalue(number));
	system("pause");
	return 0;
}

int cubeByvalue(int n)
{
	return n * n * n;
}