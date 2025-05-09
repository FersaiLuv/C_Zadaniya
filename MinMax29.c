/* ������� �� ����� MinMax0.docx � !Minmax29. ���� ����� ����� N � ����� �� N ����� �����. 
����� ������������ ���������� ������ ������ ����������� ��������� �� ������� ������. 

������� �����������: ������� ������ 303��-22 ������ ������� ���������
������������: ��������� ������ ���������

���� ���������� �������: 03.05.2025
����� ���������� �������: 13-14 �����

*/

#include <stdio.h>
// �������� ������������������ �� ����� ��������� 10
#define N 7

int main()
{
	// ������� ������
	double ar[N] = {0};

	// ��������� ������
	printf("Enter elementa array: \n");
	for (int i = 0; i < N; i++) {
		scanf("%lf", &ar[i]);
	}
	
	// ������������ ������� ����������� ������ ������� �������
	double min_i = ar[0];
	
	// ������� ����������� ������� � �������
	for (int i = 1; i < N; i++) {
		if (ar[i] <= min_i) {
			min_i = ar[i];
		}
	}

	// ������� ���������� ��������
	int count = 0; // ������� ���-��
	int max_count = 0; // ������������ ���-��

	// ��������� �� �������
	for (int i = 0; i < N; i++) {
		if (ar[i] == min_i) { // ���� ������� ������� ����� ������������
			count++; // ����������� ������� ���-��
		}
		else { // �����
			if (count > max_count) { // ���������, ���� ������� ���-�� ������ �������������
				max_count = count; // ��������� ������������ ���-��
			}
			count = 0; // �������� ������� ���-�� (� ������ ��������� �� ��������)
		}
	}

	// ���. ��������, ��������� �� ����������� �� ��� ������������������ ��������� (� ����� �������)
	if (count > max_count) {
		max_count = count;
	}
	
	printf("%d", max_count);

	return 0;

	// ����������� ������: 1 1 5 8 1 1 1
}