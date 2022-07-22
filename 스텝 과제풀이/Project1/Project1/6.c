#include <stdio.h>

/*6. a부터 b까지 곱하는 함수를 만들고
		1x2x......xb = 결과 출력하고 반환값 주는 함수 만들기
		예시
		1x2x3x4x5
		total = 120*/

int multi(int a, int b)
{
	int sum = 1;
	for (; a <= b; a++)
	{
		if (a < b)
		{
			sum *= a;
			printf("%dx", a);
		}
		else
			printf("%d.", b);
	}
return sum;
}


int main()
{
	int a, b;
	printf("첫 번째 숫자를 입력하세요.\n");
	scanf_s("%d", &a);
	printf("두 번째 숫자를 입력하세요.\n");
	scanf_s("%d", &b);
	int sum = multi(a, b);
	printf("Total=%d", sum);
	return 0;
}