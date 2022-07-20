#include <stdio.h>
#include <windows.h>

/*3. 반환값과 매개변수는 없으나
화면의 색깔을 바꿀 수 있는 함수를 구하시오.
	system('color a0') 이용*/

void greenChar()
{
	system("color a0");
}

int main()
{
	greenChar();
	return 0;
}