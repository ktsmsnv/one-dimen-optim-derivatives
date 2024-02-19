#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdio>
#include <clocale>
using namespace std;
const int M = 100;
void casat(double a, double b);
void srednix(double a, double b);
void fiban(double a, double b);
void newton(double a, double b);
void hord(double a, double b);
double function(double x);
double proizv(double x);
double proizv2(double x);


int main()
{
	double a = -2, b = 0;
	setlocale(LC_ALL, "Russian");
	int H;
	while (1)
	{
		system("cls");
		cout << "Отрезок локализации: " << "[" << a << ";" << b << "]" << endl;
		cout << "Целевая функция: f(x) = x^2+exp^(3x)"  << endl;
		cout << "____________________________" << endl;
		cout << "          МЕНЮ:" << endl;
		cout << " 1. Метод чисел Фибоначчи " << endl;
		cout << " 2. Метод средних " << endl;
		cout << " 3. Метод касательных " << endl;
		cout << " 4. Метод хорд " << endl;
		cout << " 5. Метод Ньютона " << endl;
		cout << " 6. Выход из программы" << endl;
		cout << "____________________________" << endl;
		cout << " Выберите пункт (1-7): ";
		cin >> H;
		cout << "____________________________" << endl;
		switch (H)
		{
		case 1:fiban(a, b); break;
		case 2:srednix(a, b); break;
		case 3:casat(a, b); break;
		case 4:hord(a, b); break;
		case 5:newton(a, b); break;
		case 6: system("pause");
			return 0;
		default: cout << " Такого пункта нет в меню.\n"; break;
		}
	}
}
double function(double x)
{
	return pow(x, 2) + exp(3*x);
}
double proizv(double x)
{
	return 3*exp(3*x)+2*x;
}
double proizv2(double x)
{
	return 9*exp(3*x)+2;
}
void casat(double a, double b)
{
	int N, k = 0;
	double z1, x, y2, z2, E1=0, z, y, x1=0, y1, Egar=0;
		cout << " N: "; cin >> N;
	y1 = function(a);
	z1 = proizv(a);
	y2 = function(b);
	z2 = proizv(b); k = 4;
			do
		{
			x = ((z2 * b - z1 * a) - (y2 - y1)) / (z2 - z1);
			y = function(x);
			z = proizv(x); k = k + 2;
			if (z == 0)
			{
				x1 = x; y1 = y; Egar = 0; E1 = 0;
			}
			else
			{
				if (z > 0)
				{
					b = x; y2 = y; z2 = z;
				}
				else
				{
					a = x; y1 = y; z1 = z;
				}
			}
		} while (k < N);
		x1 = x; y1 = y; Egar = b - a; E1 = abs(proizv(x1));
	cout << " x = " << x1 << "\n y = " << y1 << "\n k = " << k << "\n E1 = "
		<< E1 << "\n Eгар = " << Egar << "\n";
	system("pause");
}
void srednix(double a, double b)
{
	int N, k;
	double x, E1, z, x1, y1, Egar, Epac;
	cout << " N: "; cin >> N;
	Epac = (b - a) / (pow(2, N+1));
	k = 0;
	do
	{
		x = (a + b) / 2; z = proizv(x); k = k + 1;
		if (abs(z)>0)
		{
			if (z > 0) b = x;
			else a = x;
		}
		else
		{
			Egar = 0; x1 = x; y1 = function(x1); E1 = z;
		}
	} while (k < N);
	Egar = (b - a) / 2;
	x1 = (a + b) / 2;
	y1 = function(x1);
	E1 = abs(proizv(x1));
	cout << " x = " << x1 << "\n y = " << y1 << "\n k = " << k << "\n E1 = "
		<< E1 << "\n Eгар = " << Egar << "\n Epac = " << Epac << "\n";
	system("pause");
}
void fiban(double a, double b)
{
	double Egar, E1, d, x1, x2, y1, y2, x, y, F[M], Epac;
	int i, n;
	setlocale(LC_ALL, "Russian");
	cout << " N: "; cin >> n;
	F[0] = 1; F[1] = 1;
	for (i = 2; i <= n; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	x1 = a + ((F[n - 2] / F[n]) * (b - a)); x2 = a + ((F[n - 1] / F[n]) * (b - a)); y1 =
		function(x1);
	y2 = function(x2); d = ((b - a) / (2 * F[n])) / 100; Epac = (b - a) / (2 * F[n]);
	for (i = 0; i <= (n - 3); i++)
	{
		if (y1 <= y2) {
			b = x2; x2 = x1; y2 = y1; x1 = a + b - x2; y1 = function(x1);
		}
		else {
			a = x1; x1 = x2; y1 = y2; x2 = a + b - x1; y2 = function(x2);
		}
	}
	if (y1 <= y2) { b = x2; x2 = x1; y2 = y1; }
	else { a = x1; }
	x1 = x2 - d;
	y1 = function(x1);
	if (y1 <= y2) { b = x2; }
	else { a = x1; }
	x = (a + b) / 2;
	y = function(x);
	Egar = (b - a) / 2;
	E1 = fabs(proizv(x));
	cout << " x = " << x << "\n y = " << y << "\n Eгар = " << Egar
		<< "\n Ерас = " << Epac << "\n E1 = " << E1 << "\n";
	system("pause");
}
void newton(double a, double b)
{
	double x, xk=0, z, u, E1, x1=0, y1,  N;
	int k;
	cout << " N: "; cin >> N;
	x = a; 
	z = proizv(x); 
	u = proizv2(x); 
	k = 2;
	while (k < N && z!=0) {
		xk = x - z / u;
		z = proizv(x); u = proizv2(x);
		k += 2;
	}
	x1 = x; y1 = function(x); E1 = fabs(z);
	cout << "x= " << x1 << "\ny= " << y1 << "\nE1 = " << E1 << "\nk = " << k;

	system("pause");
}
/*void hord(double a, double b)
{
	double  N, e=0, x1=0, y1=0, Z=0, Z1=0, Z2=0, x=0, ecr=0;
	int k;
	cout << " N: "; cin >> N;
	Z1 = proizv(a);	Z2 = proizv(b);	k = 2;
	while(k<N) 
	{
		x = a - (Z1 / (Z2 - Z1)) * (b - a);
		Z = proizv(x);
		k=k+1;
		if (Z != 0) {
			if (Z > 0) { b = x; Z2 = Z; }
			else { a = x; Z1 = Z; }
		}
		else
		{
			x1 = x; y1 = function(x1); ecr = 0; e = 0; break;
		}
	} 
	e = fabs(Z); x1 = x; y1 = function(x1); ecr = b - a;
	cout << "x= " << x1 << "\ny= " << y1 << "\nE1= " << e << "\nEгар= " << ecr << "\nk = " << k;
	system("pause");
}*/
void hord(double a, double b)
{
	double  N, e = 0, x1 = 0, y1 = 0, Z = 0, Z1 = 0, Z2 = 0, x = 0, ecr = 0;
	int k;
	cout << " N: "; cin >> N;
	Z1 = proizv(a);	Z2 = proizv(b);	k = 2;
	do
	{
		x = a - (Z1 / (Z2 - Z1)) * (b - a);
		Z = proizv(x);
		k = k + 1;
		if (abs(Z) > 0)
		{
			if (Z > 0) { b = x; Z2 = Z; }
			else { a = x; Z1 = Z; }
		}
		else
		{
			x1 = x; y1 = function(x1); ecr = 0; e = 0; break;
		}
	} while (k < N);
	e = fabs(Z); x1 = x; y1 = function(x1); ecr = b - a;
	cout << "x= " << x1 << "\ny= " << y1 << "\nE1= " << e << "\nEгар= " << ecr << "\nk = " << k;
	system("pause");
}