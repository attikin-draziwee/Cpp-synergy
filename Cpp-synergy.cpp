#include <iostream>
#include <stdio.h>

int main() {
	system("chcp 1251>nul"); //windows-1251
	int day;
	printf("Введите номер дня недели: ");
	scanf_s("%i", &day);

	switch (day)
	{
	case 1:
	{
		printf("Понедельник");
	}
	break;
	case 2:
	{
		printf("Вторник");
	}
	break;
	case 3:
	{
		printf("Среда");
	}
	break;
	case 4:
	{
		printf("Четверг");
	}
	break;
	case 5:
	{
		printf("Пятница");
	}
	break;
	case 6:
	{
		printf("Суббота");
	}
	break;
	case 7:
	{
		printf("Воскресенье");
	}
	break;
	default:
	{
		printf("Error");
	}
		break;
	}

	system("pause>nul");
}