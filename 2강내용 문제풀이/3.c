#include <stdio.h>

int main()
{
	int r = 0;
	printf("반지름을 입력하세요.\n");
	scanf_s("%d", &r);
	printf("원의 넓이는 %lf\n원의 둘레는 %lf", r * r * 3.14, 2 * r * 3.14);
	return 0;
}