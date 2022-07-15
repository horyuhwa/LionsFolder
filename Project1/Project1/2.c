#include <stdio.h>

/*2. Sec(초) 값을 입력받아서
	시간이 h분 m초라는 걸 출력하되,
	3600이상의 값을 받으면
	오류 메시지를 출력한다.
	그리고 m 값은 반환한다.*/

int clock(int s)
{
	if (s >= 3600)
		printf("ERROR.");
	else
		printf("%d분 %d초 입니다.\n", s / 60, s % 60);
	return s % 60;
}

int main()
{
	int s;
	scanf_s("%d", &s);
	clock(s);
	return 0;
}