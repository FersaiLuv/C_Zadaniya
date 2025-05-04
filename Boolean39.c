/* Задание из файла Boolean0.docx – +Boolean39°. Даны координаты двух различных полей шахматной доски x1, y1, x2, y2 (целые числа, лежащие в диапазоне 1–8). 
Проверить истинность высказывания: «Ферзь за один ход может перейти с одного поля на другое». 

Решение предоставил: студент группы 303ИС-22 Петров Алексей Сергеевич
Руководитель: Гусятинер Леонид Борисович

Дата выполнения задания: 02.05.2025
Время выполнения задания: 16 минут

*/

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	// Определяем координаты
	int x1, x2, y1, y2;
	printf("Enter ccords first zone: \n");
	scnaf("%d", &x1, &y1);
	
	// Делаем проверку на диапазон по заданию от 1 до 8
	if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8) {
		printf("ERROR: coords not in range 1-8\n");
		return 1;
	}

	// Второе поле
	printf("Enter coords second zone: \n");
	scnaf("%d", &x2, &y2);

	if (x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
		printf("ERROR: coords not in range 1-8\n");
		return 1;
	}

	// Проверим координаты
	if (x1 == x2 && y1 == y2) { // Если равны - ошибка
		printf("ERROR: coords do not have to be equal");
		return 1;
	}

	// Создаём некий флаг, чтобы определить ход ферзя
	bool flag = false;
	if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) {
		flag = true;
	}

	if (flag)
		printf("YES");
	else
		printf("NO");

	
	return 0;
	// Контрольный пример: первое поле: 7, 2   второе поле: 7, 6 для YES
	// первое поле: 5, 2   второе поле: 2, 8 для NO
}