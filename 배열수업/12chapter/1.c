#include <stdio.h>

void printArr(int numbers[], int size)
{
	for (int i = 0; i < size; i++ )
		printf("%d\n", numbers[i]);
}

int main()
{
	int numbers1[5] = { 5,4,10,-2,1 };
	
	int numbers2[3];
	numbers2[0] = 100;
	numbers2[1] = 200;
	numbers2[2] = -300;

	for (int i = 0; i < sizeof(numbers1) / sizeof(int); i++)
		printf("%d\n", numbers1[i]);

	return 0;

}