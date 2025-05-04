/* Задание из файла Series0.docx – +Series35. Дано целое число K, а также K наборов ненулевых целых чисел. 
Признаком завершения каждого набора является число 0. 
Для каждого набора вывести количество его элементов. 
Вывести также общее количество элементов во всех наборах.  

Решение предоставил: студент группы 303ИС-22 Петров Алексей Сергеевич
Руководитель: Гусятинер Леонид Борисович

Дата выполнения задания: 04.05.2025
Время выполнения задания: 10 минут

*/



#include <stdio.h>

int main() {
    int K;
    printf("Enter number of sets: \n");
    scanf("%d", &K);

    int total_count = 0; // Общее количество элементов

    for (int i = 1; i <= K; i++) {
        int count = 0; // Количество элементов в текущем наборе
        int number;

        printf("Enter element of set: \n");
        while (1) {
            scanf("%d", &number);
            if (number == 0) {
                break; // Выходим из цикла, если введен 0
            }
            count++;
        }

        // Вывод кол-ва элементов в итем множестве
        printf("Number of elements in set %d: %d\n", i, count);
        total_count += count;
    }

    // Вывод кол-ва элементов во всех множествах
    printf("Total number of elements in all sets: %d\n", total_count);

    return 0;
}