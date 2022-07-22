#include <stdio.h>

int main()
{
	//사각형 5개를 입력받아라.
	//각각의 넓이 값을 구한 다음
	//배열에 차례대로 채워넣어라
	//그 중에 가장 큰 수를 찾아라
	//그 배열의 가로 세로를 출력.
	int rec[5];
	int a; //width
	int b; //height
	for (int i = 1; i <= 5; i++)
	{
		printf("사각형의 가로 세로를 입력하세요.");
		scanf_s("%d %d", &a, &b);
		rec[i - 1] = a * b;
	}
	printf("%d %d %d %d %d\n",
		rec[0], rec[1], rec[2], rec[3], rec[4]);

	int MAX = rec[0];
	for (int i = 1; i < 5; i++)
	{
		if (rec[0] > rec[i])
		{
			printf("최대넓이 %d\n", rec[0]);
			printf("최대 넓이의 가로 세로값 = %d %d\n"
				, rec[0] / b, rec[0] / a);
			break;
		}
	}
	return 0;
}