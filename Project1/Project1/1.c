#include <stdio.h>
//int sum_a_to_b(int a, int b, int c)
//{
//	int sum = 0;
//	for (; a <= b; a++)
//	{
//		if (a % c != 0)
//			sum += a;
//	}
//	printf("%d", sum);
//}
//

//int clock(int s)
//{
//	if (s >= 3600)
//		printf("ERROR.");
//	else
//		printf("%d분 %d초 입니다.\n", s / 60, s % 60);
//	return s % 60;
//}
//
//void colorchange(char a, char b)
//{
//	printf("첫 번째 문자를 입력하시오.\n");
//	rewind(stdin);
//	a = getchar();
//	rewind(stdin);
//	printf("두 번째 문자를 입력하시오.\n");
//	b = getchar();
//	char cc[9] = "color ";
//	cc[6] = a;
//	cc[7] = b;
//	cc[8] = NULL;
//	system(cc);
//
//	return 0;
//}


int main()
{/*
	int a1, b1, c1;
	printf("a,b,c 값을 입력하세요.");
	scanf_s("%d %d %d", &a1, &b1, &c1);
	sum_a_to_b(a1, b1, c1);*/

	/*2. Sec(초) 값을 입력받아서 
	시간이 h분 m초라는 걸 출력하되, 
	3600이상의 값을 받으면
	오류 메시지를 출력한다.
	그리고 m 값은 반환한다.*/

	//int s;
	//scanf_s("%d", &s);
	//clock(s);
	//return 0;

	/*3. 반환값과 매개변수는 없으나 
	화면의 색깔을 바꿀 수 있는 함수를 구하시오.
		system('color a0') 이용*/

	//system("color a0");
	//return 0;


	/*4. 반환값은 없고 매개변수 char 2개에 의하여 
	배경색과 화면색을 바꾸는 함수 구하시오.*/
	
	
	/*char a = 0, b = 0;
	colorchange(a,b);
	return 0;*/


	/*5. 1부터 100까지 더하는 함수를 만들되,
		1 + 2 + 3..... + 100 = 5050 이라는
		메시지도 출력해주는 함수
		만들기(단 5050값은 반환해준다)*/

}