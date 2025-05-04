/* Задание из файла Text0.docx – +Text26. Дан текстовый файл. Найти количество абзацев в тексте, если 
первая строка каждого абзаца начинается с 5 пробелов («красная строка»). 
Пустые строки между абзацами не учитывать.    

Решение предоставил: студент группы 303ИС-22 Петров Алексей Сергеевич
Руководитель: Гусятинер Леонид Борисович

Дата выполнения задания: 04.05.2025
Время выполнения задания: 17-18 минут

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Максимальная длина
#define MAX_LINE_LENGTH 256

// Функция для проверки, является ли символ пробельным
int space(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

// Функция для удаления пробельных символов в конце строки
void remove_space(char* str) {
    int index = strlen(str) - 1;
    while (index >= 0 && space(str[index])) {
        str[index] = '\0';
        index--;
    }
}

// Функция для проверки, начинается ли строка с пяти пробелов
int starts_with_five_spaces(const char* str) {
    return (strncmp(str, "     ", 5) == 0);
}

int main() {
    const char* filename = "text.txt"; // Имя файла с текстом
    FILE* file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1; // Возвращаем код ошибки
    }

    int paragraph_count = 0;
    int in_paragraph = 0;
    char line[MAX_LINE_LENGTH];

    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        remove_space(line);

        if (strlen(line) == 0) {
            // Пустая строка
            in_paragraph = 0;
        }
        else {
            // Непустая строка
            if (starts_with_five_spaces(line) && !in_paragraph) {
                paragraph_count++;
                in_paragraph = 1;
            }
        }
    }

    fclose(file);

    printf("Number of paragraphs: %d\n", paragraph_count);

    return 0;
}