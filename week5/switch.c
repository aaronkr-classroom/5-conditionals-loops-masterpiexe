#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("�۾� ����\n");
	printf("�����Է�: ");
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




	
		printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	
	printf("�۾� ����\n");

	getch();//�ƹ�Ű�� ���� ���� �̵��� �ȶ�
	return 0;
}



