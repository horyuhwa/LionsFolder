#include <stdio.h>
/*1. 나이를 입력한다.
그리고 20살 미만이면 아이, 
20살 이상이면 성인이라고 출력한다.*/

int main()
{
	int age;
	printf("나이를 입력하세요.\n");
	scanf_s("%d", &age);
	if (age < 20 ? printf("아이") : printf("성인"));
	return 0;
}