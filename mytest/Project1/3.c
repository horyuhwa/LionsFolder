#include <stdio.h>
//3. 구구단을 2단부터 9단까지 출력해보세요.

int main()
{
	int t;
	int i;
	for (t = 2; t < 10; t++)
	{
		for (i = 1; i < 10; i++)
		{
			printf("%dx%d=%d\n", t, i, t * i);
		}
	}
	return 0;
}