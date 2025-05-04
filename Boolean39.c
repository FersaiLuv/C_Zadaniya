/* ������� �� ����� Boolean0.docx � +Boolean39�. ���� ���������� ���� ��������� ����� ��������� ����� x1, y1, x2, y2 (����� �����, ������� � ��������� 1�8). 
��������� ���������� ������������: ������ �� ���� ��� ����� ������� � ������ ���� �� ������. 

������� �����������: ������� ������ 303��-22 ������ ������� ���������
������������: ��������� ������ ���������

���� ���������� �������: 02.05.2025
����� ���������� �������: 16 �����

*/

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	// ���������� ����������
	int x1, x2, y1, y2;
	printf("Enter ccords first zone: \n");
	scnaf("%d", &x1, &y1);
	
	// ������ �������� �� �������� �� ������� �� 1 �� 8
	if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8) {
		printf("ERROR: coords not in range 1-8\n");
		return 1;
	}

	// ������ ����
	printf("Enter coords second zone: \n");
	scnaf("%d", &x2, &y2);

	if (x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
		printf("ERROR: coords not in range 1-8\n");
		return 1;
	}

	// �������� ����������
	if (x1 == x2 && y1 == y2) { // ���� ����� - ������
		printf("ERROR: coords do not have to be equal");
		return 1;
	}

	// ������ ����� ����, ����� ���������� ��� �����
	bool flag = false;
	if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) {
		flag = true;
	}

	if (flag)
		printf("YES");
	else
		printf("NO");

	
	return 0;
	// ����������� ������: ������ ����: 7, 2   ������ ����: 7, 6 ��� YES
	// ������ ����: 5, 2   ������ ����: 2, 8 ��� NO
}