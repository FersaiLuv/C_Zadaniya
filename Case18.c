/* ������� �� ����� Case0.docx � +Case18�. ���� ����� ����� � ��������� 100�999. ������� ������-�������� ������� �����, ��������: 
256 � ������� ��������� ������, 814 � ���������� �������������. 

������� �����������: ������� ������ 303��-22 ������ ������� ���������
������������: ��������� ������ ���������

���� ���������� �������: 02.05.2025
����� ���������� �������: 37-39 �����

*/

#include <stdio.h>
// ����� ����� ��� ��������... ������ 899 ������� ��� ������� ����� ���� ���� ��������� ��������. �� ����� � �����:
int main()
{
	// ������ ������ �����
	int n;
	printf("Enter number: \n");
	scanf("%d", &n);

	// �������� ��������� �� ����� � ���������
	if (n < 100 || n > 999) {
		printf("Number not in range 100-999");
		return 1;
	}

	// ����� ����� �� �����, ������� � �������
	int hund = n / 100;
	int ostatok = n % 100; // ��� ��� �������� ������, ������ ���������, ���� ������, ���������� ���������� ��������
	int tens = ostatok / 10;
	int units = ostatok % 10;

	// ������� ����� � ���� ������
	// �����
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

	// ��������� ������� ��� ������� �� 100
	if (ostatok > 0) {
		if (tens == 1) { // ������� ������� ������� �� 10 �� 19 (������ ������)
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
		else { // ����� ����������� ��������� ������� 20-90
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
			switch (units) { // � ��� �������
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

	// ����������� ������: 111, 200, 444, 256, 841, 999, 99, 1000

	return 0;
}