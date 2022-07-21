#include <stdio.h>


int comp(int a, int b)
{
	if (a == b)
	{
		printf("숫자를 다시 입력하세요.\n");

		printf("숫자를 입력하세요.\n");
		scanf_s("%d", &a);
		printf("숫자를 입력하세요.\n");
		scanf_s("%d", &b);
		comp(a, b);
		return 0;
	}
	//else
	//{
		if (a > b)
		{
			printf("%d\n", a);
		}
		else
			printf("!! %d\n", b);
	//}
		
}

int comp2(int a, int b)
{
	Start:
	if (a == b)
	{
		printf("숫자를 다시 입력하세요.\n");
		printf("숫자를 입력하세요.\n");
		scanf_s("%d", &a);
		printf("숫자를 입력하세요.\n");
		scanf_s("%d", &b);
		goto Start;
	}
	//else
	//{
	if (a > b)
	{
		printf("%d\n", a);
	}
	else
		printf("!! %d\n", b);
	//}

}

int main()
{
	int a, b, n;
	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &a);
	rewind(stdin);
	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &b);
	//comp(a,b);
	comp2(a,b);
	return 0;
}