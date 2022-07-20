#include <stdio.h>
/*2. 1번에 대해서 0 미만의 숫자인 경우는 
잘못된 것이라는 메시지 예외처리 추가한다.*/

int main()
{
	int age;
	printf("나이를 입력하세요.\n");
	scanf_s("%d", &age);
	if (age < 0)
		printf("잘못되었습니다.\n");
	else if (age < 20 ? printf("아이") : printf("성인"));
	return 0;
}