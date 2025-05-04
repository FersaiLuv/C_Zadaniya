/* Задание из файла Param0.docx – +Param11. Описать процедуру SortArray(A, N), выполняющую сортировку по возрастанию вещественного массива A размера N. 
Массив A является входным и выходным параметром. С помощью этой процедуры отсортировать массивы A, B, C размера NA, NB, NC соответственно. 

Решение предоставил: студент группы 303ИС-22 Петров Алексей Сергеевич
Руководитель: Гусятинер Леонид Борисович

Дата выполнения задания: 03.05.2025
Время выполнения задания: 14-15 минут

*/



#include <stdio.h>

void sorted(double a[], int length)
{
	for (int i = 0; i < length; i++) {
		int min = i;
		for (int j = i + 1; j < length - 1; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}

		if (min != i) {
			double temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
}

int main()
{
	// Инициализация массивов
	double A[] = { 5.0, 2.0, 8.0, 1.0, 9.0 };
	int NA = sizeof(A) / sizeof(A[0]);

	double B[] = { 3.1, 1.4, 1.5, 9.2, 6.5, 3.5 };
	int NB = sizeof(B) / sizeof(B[0]);

	double C[] = { 2.7, 1.8, 2.8 };
	int NC = sizeof(C) / sizeof(C[0]);

	sorted(A, NA);
	sorted(B, NB);
	sorted(C, NC);

	// Вывод результатов для массива A
	printf("Array A: Size = %d, Elements = ", NA);
	for (int i = 0; i < NA; i++) {
		printf("%.1f ", A[i]);
	}
	printf("\n");

	// Вывод результатов для массива B
	printf("Array B: Size = %d, Elements = ", NB);
	for (int i = 0; i < NB; i++) {
		printf("%.1f ", B[i]);
	}
	printf("\n");

	// Вывод результатов для массива C
	printf("Array C: Size = %d, Elements = ", NC);
	for (int i = 0; i < NC; i++) {
		printf("%.1f ", C[i]);
	}
	printf("\n");

	return 0;
}


	
}