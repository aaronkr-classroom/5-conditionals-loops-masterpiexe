#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("작업 시작\n");
	printf("점수입력: ");
	scanf_s("%d", &score);




	if (score >= 90)
	{
		grade = 'A';
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	}

	else if (score >= 80)
	{
		grade = 'B';
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	}
	else if (score >= 70 )
	{
		grade = 'C';
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	}
	else if (score >= 60 )
	{
		grade = 'D';
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	}
	else
	{
		grade = 'F';
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	}
	printf("작업 종료\n");

	getch();//아무키를 눌러 종료 이딴거 안뜸
	return 0;
}



