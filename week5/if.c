#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("�۾� ����\n");
	printf("�����Է�: ");
	scanf_s("%d", &score);




	if (score >= 90)
	{
		grade = 'A';
		printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	}

	else if (score >= 80)
	{
		grade = 'B';
		printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	}
	else if (score >= 70 )
	{
		grade = 'C';
		printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	}
	else if (score >= 60 )
	{
		grade = 'D';
		printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	}
	else
	{
		grade = 'F';
		printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	}
	printf("�۾� ����\n");

	getch();//�ƹ�Ű�� ���� ���� �̵��� �ȶ�
	return 0;
}



