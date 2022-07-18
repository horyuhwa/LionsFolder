#include <stdio.h>

int main()
{
	int age = 0;
	printf("나이를 입력하세요.\n");
	scanf_s("%d", &age);
	printf("%d세.", 2022 - age + 1);
	return 0;
}