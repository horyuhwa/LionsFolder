#include <stdio.h>

int area(Rectangle r)
{
	
}

struct Rectangle //���� ����
{
	int width; //���� 2���� ����
	int height;
}typedef Rectangle;

//���� = width*height

int main()
{
	struct Rectangle r1;
	r1.width = 20;
	r1.height = 40;
	printf("���� : %d\n", r1.width * r1.height); //�ܼ��ϰ� ������..
	printf("���� : %d\n", area(r2)); //�Լ� Ȱ��



	struct Rectangle r2;
	r2.width;
	r2.height;
	printf("���� : %d\n", r2.width * r2.height);
	Rectangle r2; //typedef Rectangle �� ������ �׻� �տ� struct �پ�� ��.
	scanf_s("%d %d", &r2.width, &r2.height);

	return 0;
}