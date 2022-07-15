#include <stdio.h>

/*5. 1부터 100까지 더하는 함수를 만들되,
		1 + 2 + 3..... + 100 = 5050 이라는
		메시지도 출력해주는 함수
		만들기(단 5050값은 반환해준다)*/

int main()
{
	int i = 1;
	int sum = 0;

	for (; i < 100; i++)
	{
		sum += i;
		printf("%d%c", i, '+');
	}
	printf("%d=%d", 100, 1050);
	return 5050;
}