#include <stdio.h>
#define MAX 1024 //매크로상수
//스택보다 더 먼저 처리됨. 이걸로는 배열크기잡기 가능.

int main()
{
	int numbers[5]; //임의로 배열크기 정함.
	int mynumbers[MAX];
	//int num = 5;
	//int numbers2[num]; //변수로 배열 크기 지정을 못한다. >> 메모리 영역이 다름
	//지정변수 배열이 같은 영역에 있으면 (스택영역) num값을 할당하는 게 불가능.
	//뭐가 먼저 메모리 영역에 올라갈 지를 알 수가 없다. 그래서 할당하는 게 불가.

	int size = sizeof(numbers) / sizeof(int);

	for (int i = 0; i < size; i++) //숫자 잘 들어갔는지 확인하는 과정. 혹은 디버그모드로 확인가능.
	{
		printf("%d번째 숫자 입력", i);
		scanf_s("%d", &numbers[i]);
	}
	//가장 첫번째 숫자를 가장 크다고 가정함.
	int max = numbers[0];
	int max_index = 0;
	for (int i = 0; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
			max_index = i; //정답
		}
	}
	printf("최댓값은 [%d]에 있습니다.\n", max_index + 1); // 순번을 1로 시작하게 하는 법.
	return 0;
}