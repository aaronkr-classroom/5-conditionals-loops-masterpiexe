#include<stdio.h>
void check369(int num);

int main()
{
	int num;
	printf("369���� ȯ���մϴ�! �������� �մϱ�?:");
	scanf_s("%d", &num);
	for (int i = 1; i < num; i++)
	{
		check369(i);
	}
}
void check369(int num)
{
	int contains369 = 0;
	int temp = num;
	while (temp > 0)
	{
		int digit = temp % 10;

		switch (digit)
		{
			case3:
			case6:
			case9:
			contains369 = 1;
			break;
		}

		temp /= 10;
	}
	if (contains369) printf("clap!\n ");
	else printf("%d\n", num);
}