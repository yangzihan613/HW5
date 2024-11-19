#include <stdio.h>
#include<stdlib.h>

void bubbleSort(int* const array, const int size);
void swap(int* element1Ptr, int* elemsnt2Ptr);

int  main(){
	int array[10] = { 2, 4, 6, 8, 10, 12, 89, 68, 45, 37 }, i;

	printf("Data items in original order\n  ");
	for (i = 0; i <= 9; i++)
	printf("%2d  ", array[i]);

	bubbleSort(array, 10);

	printf("\n\nData items in ascending order\n  ");
	for (i = 0; i <= 9; i++)
		printf("%2d  ", array[i]);

	system("pause");
	return 0;
}
void bubbleSort(int* const array, const int size) {
	void swap(int* element1Ptr, int* elemsnt2Ptr);
	int pass,j;
	for (pass = 0; pass < size - 1; pass++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
		}
	}
}
void swap(int* element1Ptr, int* element2Ptr)
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}