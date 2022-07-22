#include <stdio.h>

void printArr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", numbers[i]);
}

int main()
{
	printArr(5,10);
	return 0;
}