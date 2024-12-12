#include <stdio.h>

int main()
{
	int n, a, b, c, d;
	printf("Nhap n 4 chu so: ");
	scanf("%d", &n);

	a = n / 1000;
	b = n / 100 % 10;
	c = n / 10 % 10;
	d = n % 10;

	printf("Tong cua 4 chu so cua n la: %d", a + b + c + d);

	return 0;
}