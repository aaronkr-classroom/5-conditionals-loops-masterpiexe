#include<stdio.h>
int main()
{
	int score;
	
	printf("작업 시작\n");
	printf("점수입력: ");
	scanf_s("%d", &score);

	char grade = (score >= 90) ? 'A' :
		(score >= 80) ? 'B' :
		(score >= 70) ? 'C' :
		(score >= 60) ? 'D' : 'F';




	
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	
	printf("작업 종료\n");

	getch();//아무키를 눌러 종료 이딴거 안뜸
	return 0;
}



