#include <stdio.h>

int area(Rectangle r)
{
	
}

struct Rectangle //변수 생성
{
	int width; //값을 2개를 가짐
	int height;
}typedef Rectangle;

//넓이 = width*height

int main()
{
	struct Rectangle r1;
	r1.width = 20;
	r1.height = 40;
	printf("넓이 : %d\n", r1.width * r1.height); //단순하게 생각해..
	printf("넓이 : %d\n", area(r2)); //함수 활용



	struct Rectangle r2;
	r2.width;
	r2.height;
	printf("넓이 : %d\n", r2.width * r2.height);
	Rectangle r2; //typedef Rectangle 안 적으면 항상 앞에 struct 붙어야 함.
	scanf_s("%d %d", &r2.width, &r2.height);

	return 0;
}