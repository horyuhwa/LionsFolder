#include <stdio.h>

int main()
{
	int byte;
	printf("byte값을 입력하세요.\n");
	scanf_s("%d", &byte);
	printf("%d bit.", byte * 8);
	return 0;
}