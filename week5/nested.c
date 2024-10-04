#include<stdio.h>
int main()
{
	int year = 2024, month = 12, day = 31;
	printf("Date:%d년 %d월 %d일\n", year, month, day);
	day++; printf("tomorrow is...");

	if (day > 31)
	{
		month++;
		day = 1;
		if (month > 12)
		{
			year++;
			month = 1;
		}
	}
	printf("Date:%d년 %d월 %d일\n", year, month, day);
	if (month == 1 && day == 1) printf("happy new year!");
}