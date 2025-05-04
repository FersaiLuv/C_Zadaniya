/* Задание из файла Case0.docx – +Case18°. Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 
256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать». 

Решение предоставил: студент группы 303ИС-22 Петров Алексей Сергеевич
Руководитель: Гусятинер Леонид Борисович

Дата выполнения задания: 02.05.2025
Время выполнения задания: 37-39 минут

*/

#include <stdio.h>
// Долго думал над решением... Писать 899 свитчей для каждого числа было явно абсурдным решением. Но потом я понял:
int main()
{
	// Просим ввести число
	int n;
	printf("Enter number: \n");
	scanf("%d", &n);

	// Проверим относится ли число к диапазону
	if (n < 100 || n > 999) {
		printf("Number not in range 100-999");
		return 1;
	}

	// Делим число на сотни, десятки и единицы
	int hund = n / 100;
	int ostatok = n % 100; // Вот тут ключевой момент, Леонид Борисович, буду честен, подсмотрел правильный алгоритм
	int tens = ostatok / 10;
	int units = ostatok % 10;

	// Выводим число в виде строки
	// Сотни
	switch (hund) {
		case 1: printf("Sto "); break;
		case 2: printf("Dvesti "); break;
		case 3: printf("Tristo "); break;
		case 4: printf("Cheturisto "); break;
		case 5: printf("Pyatsot "); break;
		case 6: printf("Shestsot "); break;
		case 7: printf("Semsot "); break;
		case 8: printf("Vosemsot "); break;
		case 9: printf("Devyatsot "); break;
	}

	// Проверяем остаток при делении на 100
	if (ostatok > 0) {
		if (tens == 1) { // Перебор первого десятка от 10 до 19 (особый случай)
			switch (units) {
				case 0: printf("Desyat "); break;
				case 1: printf("Odinnadcat "); break;
				case 2: printf("Dvenadcat "); break;
				case 3: printf("Trinadcat "); break;
				case 4: printf("Cheturnadcat "); break;
				case 5: printf("Pytnadcat "); break;
				case 6: printf("Shestnadcat "); break;
				case 7: printf("Semnadcat "); break;
				case 8: printf("Vosemnadcat "); break;
				case 9: printf("Devyatnadcat "); break;
			}
		}
		else { // Иначе перебериаем остальные десятки 20-90
			switch (tens) {
				case 2: printf("Dvadcat "); break;
				case 3: printf("Tridcat "); break;
				case 4: printf("Sorok "); break;
				case 5: printf("Pyatdesyat "); break;
				case 6: printf("Shestdesyat "); break;
				case 7: printf("Semdesyat "); break;
				case 8: printf("Vosemdesyat "); break;
				case 9: printf("Devyanosto "); break;
			}
			switch (units) { // А тут единицы
				case 1: printf("Odin"); break;
				case 2: printf("Dva"); break;
				case 3: printf("Tri"); break;
				case 4: printf("Cheture"); break;
				case 5: printf("Pyat"); break;
				case 6: printf("Shest"); break;
				case 7: printf("Sem"); break;
				case 8: printf("Vosem"); break;
				case 9: printf("Devyat"); break;
			}
		}
	}

	// Контрольный пример: 111, 200, 444, 256, 841, 999, 99, 1000

	return 0;
}