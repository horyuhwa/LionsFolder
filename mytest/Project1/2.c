#include <stdio.h>

/*2. 구구단 n단을 출력해보세요.
입력 : 3
3x1=3
3x2=6
...
3x9=27*/

int main()
{
	int n;
	printf("원하는 숫자를 입력하세요.\n");
	scanf_s("%d", &n);

	int i;
	for (i = 1; i < 10; i++)
	{
		printf("%dx%d=%d\n",n, i, n * i);
	}
	return 0;
}