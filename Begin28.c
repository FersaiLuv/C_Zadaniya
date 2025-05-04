/* Задание из файла Begin0.docx – +Begin28°. Дано число A. Вычислить A15, используя две вспомогательные переменные и пять операций умножения. 
Для этого последовательно находить A2, A3, A5, A10, A15. Вывести все найденные степени числа A.  

Решение предоставил: студент группы 303ИС-22 Петров Алексей Сергеевич
Руководитель: Гусятинер Леонид Борисович

Дата выполнения задания: 02.05.2025
Время выполнения задания: 8-9 минут

*/


#include <stdio.h>

int main()
{
	// Попросим пользователя ввести число
	int num;
	printf("Enter your number: \n");
	scanf_s("%d", &num);
	// Надо или нет, но я добавлю проверку на ноль
	if (num == 0) {
		printf("Zero in defferent power = 1\n");
		return 0;
	}
	
	// Создаем всопмогательные переменные 
	int num_kvadrat = num * num; // Первое *
	int num_cube = num_kvadrat * num; // Второе

	// Сразу начнем выводить промежутки:
	printf("%d in power 2 = %d\n", num, num_kvadrat);
	printf("%d in power 3 = %d\n", num, num_cube);
	int num_5 = num_kvadrat * nim_cube; // Третье
	printf("%d in power 5 = %d\n", num, num_5);
	int num_10 = num_5 * num_5; // Четвертое
	printf("%d in power 10 = %d\n", num, num_10);

	// Финальный вывод
	int num_15 = num_10 * num_5; // Пятое
	printf("%d in power 2 = %d\n", num, num_15);

	// Контрольный пример: -2, на всех НЕчетных степенях должно быть отрицаьательное значение
	return 0;
}