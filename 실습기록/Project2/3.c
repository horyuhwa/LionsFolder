#include <stdio.h>

/*3. 숫자를 입력한다. 
양수 , 0, 음수 중 하나를 출력한다.
hint) 삼항연산자는 중첩이 된다. 
(괄호로 묶기 등을 이용해서 시도해보기)*/

int main()
{
	int num;
	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &num);
	if (num == 0 ? printf("0") : (num > 0 ? printf("양수") : printf("음수")));
	return 0;
}
