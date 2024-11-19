#include <stdio.h>
#include <stdlib.h>

void cubeByvalue(int  &nPtr);

void main()
{
	int number = 5,a=10;
	printf("The original value of number is %d\n", number);
	cubeByvalue( number );
	printf("The new value of number is %d\n", number);
	system("pause");
	
}

void cubeByvalue(int &nPtr)
{
	nPtr = nPtr * nPtr *  nPtr;
}
