#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	printf("�迭 ������ ����");
	scanf_s("%d", &size);
	int* arr = (int*)malloc(size * sizeof(int));
	
	for (int i = 0; i < size; i++) {
		arr[i] = i + 10;
		printf("%d\n", arr[i]);
	}
	free(arr);
	return 0;
}