#include <stdio.h>

//1. 변수 a와 b와 c의 값을 입력받고, 
// a부터 b까지의 합을 구하되, 
// c의 배수 부분은 제외하고 합을 구할 것.
//이 값을 main에 반환하는 함수 작성하기
//(못하겠다면 그냥 main에 먼저 짜보기)

int sum_a_to_b(int a, int b, int c)
{
	int sum = 0;
	for (; a <= b; a++)
	{
		if (a % c != 0)
			sum += a;
	}
	printf("%d", sum);
}

int main()
{
	int a1, b1, c1;
	printf("a,b,c 값을 입력하세요.");
	scanf_s("%d %d %d", &a1, &b1, &c1);
	sum_a_to_b(a1, b1, c1);
	return 0;
}