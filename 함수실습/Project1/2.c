#include <stdio.h>

int comp(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else //else 생략해도 되는데 의미는 좀 다르다.
     	return b;
}
//void 타입은 리턴이 없어도 된다.
//강제종료 시킬 경우는 return;
//예시는 강의자료에.

int main()
{
	int a = 0;
	int b = 0;
	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &a);
	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &b);
	printf("%d",comp(a, b)); //반환값 확인법?
}