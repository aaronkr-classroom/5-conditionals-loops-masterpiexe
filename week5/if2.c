#include<stdio.h>
int main()
{
	int score;
	
	printf("�۾� ����\n");
	printf("�����Է�: ");
	scanf_s("%d", &score);

	char grade = (score >= 90) ? 'A' :
		(score >= 80) ? 'B' :
		(score >= 70) ? 'C' :
		(score >= 60) ? 'D' : 'F';




	
		printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	
	printf("�۾� ����\n");

	getch();//�ƹ�Ű�� ���� ���� �̵��� �ȶ�
	return 0;
}



