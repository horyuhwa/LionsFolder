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
//		printf("%d�� %d�� �Դϴ�.\n", s / 60, s % 60);
//	return s % 60;
//}
//
//void colorchange(char a, char b)
//{
//	printf("ù ��° ���ڸ� �Է��Ͻÿ�.\n");
//	rewind(stdin);
//	a = getchar();
//	rewind(stdin);
//	printf("�� ��° ���ڸ� �Է��Ͻÿ�.\n");
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
	printf("a,b,c ���� �Է��ϼ���.");
	scanf_s("%d %d %d", &a1, &b1, &c1);
	sum_a_to_b(a1, b1, c1);*/

	/*2. Sec(��) ���� �Է¹޾Ƽ� 
	�ð��� h�� m�ʶ�� �� ����ϵ�, 
	3600�̻��� ���� ������
	���� �޽����� ����Ѵ�.
	�׸��� m ���� ��ȯ�Ѵ�.*/

	//int s;
	//scanf_s("%d", &s);
	//clock(s);
	//return 0;

	/*3. ��ȯ���� �Ű������� ������ 
	ȭ���� ������ �ٲ� �� �ִ� �Լ��� ���Ͻÿ�.
		system('color a0') �̿�*/

	//system("color a0");
	//return 0;


	/*4. ��ȯ���� ���� �Ű����� char 2���� ���Ͽ� 
	������ ȭ����� �ٲٴ� �Լ� ���Ͻÿ�.*/
	
	
	/*char a = 0, b = 0;
	colorchange(a,b);
	return 0;*/


	/*5. 1���� 100���� ���ϴ� �Լ��� �����,
		1 + 2 + 3..... + 100 = 5050 �̶��
		�޽����� ������ִ� �Լ�
		�����(�� 5050���� ��ȯ���ش�)*/

}