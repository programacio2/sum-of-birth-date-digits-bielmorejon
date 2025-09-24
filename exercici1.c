#include <stdio.h>

int main()
{
	int day, month, year;
	printf("Day of birth (DD): ");
	scanf_s("%d", &day);

	while (day < 01 || day > 31)
	{
		printf("Error, new day of birth (DD): ");
		scanf_s("%d", &day);
	}

	printf("Month of birth (MM): ");
	scanf_s("%d", &month);

	while (month < 01 || month > 12)
	{
		printf("Error, new month of birth (MM): ");
		scanf_s("%d", &month);
	}

	printf("Year of birth (YYYY): ");
	scanf_s("%d", &year);

	while (year < 1000 || year > 9999)
	{
		printf("Error, new year of birth (YYYY): ");
		scanf_s("%d", &year);
	}

	int final = day + month + year;
	printf("\nFinal result: %d + %d + %d = %d\n", day, month, year, final);
}