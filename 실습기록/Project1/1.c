#include <stdio.h>

int main()
{
	int a;
	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &a);
	if (a < 0)
	{
		printf("음수\n");
	}
	else
	{
		printf("정상\n");
	}
	return 0;
}