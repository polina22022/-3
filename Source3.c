#include <stdio.h>
#include <locale.h>
#define D    63241
int main()
{

	setlocale(LC_CTYPE, "RUS");
	double s;
	double result;
	puts("Введите число");
	scanf("%lf", &s);
	result = D * s;
	printf(" %.1f световых лет - это %.1f астрономических единиц\n", s, result);
}
