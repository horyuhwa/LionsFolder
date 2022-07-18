#include <stdio.h>

int main()
{
	int bit;
	printf("bit값을 입력하시오.\n");
	scanf_s("%d", &bit);
	printf("%d byte.", bit / 8);
	return 0;
}