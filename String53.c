/* Задание из файла String0.docx – +String53. Дана строка-предложение на русском языке. Подсчитать количество содержащихся в строке знаков препинания.   

Решение предоставил: студент группы 303ИС-22 Петров Алексей Сергеевич
Руководитель: Гусятинер Леонид Борисович

Дата выполнения задания: 04.05.2025
Время выполнения задания: 5 минут

*/



#include <stdio.h>
#include <string.h>

#define MAX_LEN 100 // Определяем максимальную длину строки
int main() {
    const char *ptr = ".,:?!;";

    char str[MAX_LEN];

    // Вводим строку
    printf("Enter string: \n");
    fgets(str, MAX_LEN, stdin);

    // Создаем счётчик знаков препинания
    int c = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (strchr(ptr, str[i]) != NULL) {
            c++;
        }
    }

    printf("Kol-vo znakov prepinaniya: %d", c);
    return 0;
}