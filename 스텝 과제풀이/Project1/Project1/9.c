#include <stdio.h>

//선생님 말씀
//9. 1부터 n까지의 값을 곱하는 함수를 작성하시오(재귀함수)
//1~5까지의 곱 : 5x 1~4까지의 곱
//1~4까지의 곱 : 4x 1~3까지의 곱
//1~3까지의 곱 : 3x 1~2까지의 곱
//1~2까지의 곱 : 2x 1~1까지의 곱
//1~1까지의 곱 : 1
//if(n<=1)
//return 1;

int sum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			i = n * i;
		}
	}
}

int main()
{

	return 0;
}