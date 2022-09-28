#include <locale.h>
#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

void main(void)
{
	setlocale(LC_ALL, "RUS");
	
	// 1
	float angle;
	puts("Введите угол в градусах: ");
	scanf("%f", &angle);
	printf("\nУгол = %.2f градусов", angle);
	double angleOnRadians = angle * (M_PI / 180);
	printf("\nСинус угла %.2f градусов = %g\n\n\n\n",angle, sin(angleOnRadians));

	// 2
	printf("2^8 = %g\n2^16 = %g\n2^32 = %g\n2^64 = %g\n2^128 = %g\n\n\n", pow(2, 8), pow(2, 16), pow(2, 32), pow(2, 64), pow(2, 128));

	// 3
	double x;
	puts("Введите значение x: ");
	scanf("%lg", &x);
	int t = 3;
	double a = (1. / t) + pow(x, 3);
	double b = (t * t) * sqrt(fabs(a + x));
	double y = pow(log(fabs(b + pow(a, 2))), 5);
	printf("\nt = %d\na = %g\nb = %g\ny = %g\nx = %lg", t, a, b, y, x);

	// 4
	x = 3.74e-2;
	y = -0.825;
	double z = 0.16e+2;
	double v = ((double)(1 + pow(sin(x + y), 2))) / fabs(x - (((double)(2 * y)) / (1 + pow(x, 2) * pow(y, 2))))*pow(x, fabs(y))+pow(cos(atan(1/z)), 2);
	printf("\n\n\nv = %lg", v);
}