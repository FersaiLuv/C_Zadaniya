/* Задание из файла Recur0.docx – Recur10°. Описать рекурсивную функцию DigitSum(K) целого типа, которая находит сумму цифр 
целого числа K, не используя оператор цикла. С помощью этой функции найти суммы цифр для пяти данных целых чисел. 

Решение предоставил: студент группы 303ИС-22 Петров Алексей Сергеевич
Руководитель: Гусятинер Леонид Борисович

Дата выполнения задания: 04.05.2025
Время выполнения задания: 13-14 минут

*/



#include <stdio.h>


int DigitSum(int K) {
    
    // Проверка, что число не ноль
    if (K == 0) {
        return 0;
    }
    else {
        // Рекурсивный случай:
        // 1. Находим последнюю цифру числа
        int last_digit = K % 10;
        // 2. Удаляем последнюю цифру из числа
        int ydalitel = K / 10;
        // 3. Рекурсивно вызываем DigitSum для оставшейся части числа
        int recurs = DigitSum(ydalitel);
        // 4. Возвращаем сумму последней цифры и рекурсивной суммы
        return last_digit + recurs;
    }
}

int main() {
    // Задаем пять целых чисел
    int K1, K2, K3, K4, K5;
    printf("Enter five numbers: \n");
    scanf("%d %d %d %d %d", &K1, &K2, &K3, &K4, &K5);

    // Вызываем функцию DigitSum для каждого числа и выводим результат
    printf("DigitSum of %d = %d\n", K1, DigitSum(K1));
    printf("DigitSum of %d = %d\n", K2, DigitSum(K2));
    printf("DigitSum of %d = %d\n", K3, DigitSum(K3));
    printf("DigitSum of %d = %d\n", K4, DigitSum(K4));
    printf("DigitSum of %d = %d\n", K5, DigitSum(K5));

    return 0;

    // Контрольный пример: 144 777 987 0 -74
}