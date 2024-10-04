#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("작업 시작\n");
	printf("점수입력: ");
	scanf_s("%d", &score);


	switch (score / 10)
	{
	case 10:
	case 9:
		grade = 'A'; break;
	case 8:
		grade = 'B'; break;
	case 7:
		grade = 'C'; break;
	case 6:
		grade = 'D'; break;
	default:
		grade = 'F'; break;
		



	}




	
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	
	printf("작업 종료\n");

	getch();//아무키를 눌러 종료 이딴거 안뜸
	return 0;
}



