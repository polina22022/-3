#include <stdio.h>
#include <locale.h>
#define D    63241
int main()
{

	setlocale(LC_CTYPE, "RUS");
	double s;
	double result;
	puts("������� �����");
	scanf("%lf", &s);
	result = D * s;
	printf(" %.1f �������� ��� - ��� %.1f ��������������� ������\n", s, result);
}
