#include <stdio.h>

struct Student
{
	int math;
	int eng;
	int kor;
};

int main()
{
	struct Student s1;
	s1.math = 50;
	s1.kor = 60;
	s1.eng = 100;

	struct Student s2;
	s2.math - 100;
	s2.kor = 100;
	s2.eng = 0;

	struct Student s3;
	printf("성적을 입력하세요. 수학 국어 영어 순서로.\n");
	scanf_s("%d", &s3.math);
	scanf_s("%d", &s3.kor);
	scanf_s("%d", &s3.eng);

	printf("수학 %d점\n국어 %d점\n영어 %d점\n", s3.math, s3.kor, s3.eng);
	return 0;
}