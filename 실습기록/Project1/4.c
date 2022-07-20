#include <stdio.h>

int main()
{
	int a;
	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &a);
	switch (a % 3) 
	{
		case 0:
			printf("가위\n");
			break;
		case 1:
			printf("바위\n");
			break;
		case 2:
			printf("보\n");
			break;
		default:
			printf("모르겠다.\n");
			break;
	}
	return 0;
}