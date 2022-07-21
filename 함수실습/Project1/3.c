#include <stdio.h>

/*숫자 2개를 서로 바꿔주는 함수 만들기
int a = 3, int b = 5;
=> a에 5가 들어가고 b에 3 들어가게 하기*/

void swap(int* a, int* b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() 
{
	int num1;
	int num2;
	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &num1);
	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &num2);
	printf("원래 숫자 a:%d, b:%d\n", num1, num2);
	swap(&num1, &num2);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("바뀐 숫자 a:%d, b:%d\n", num1, num2);
	return 0;
}