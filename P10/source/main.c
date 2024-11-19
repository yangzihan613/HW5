#include <stdio.h>
#include <stdlib.h>

int cubeByvalue(int *nPtr);

void main()
{
	int number = 5;
	printf("The original value of number is %d\n", number);
	cubeByvalue(&number)
	printf("The new value of number is %d\n", number);
	system("pause");
	return 0;
}

int cubeByvalue(int* nPtr)
{
	return *nPtr * *nPtr * *nPtr;
}