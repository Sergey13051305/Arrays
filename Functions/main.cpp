#include<iostream>
using namespace std;

#define delimetr
int Sum(int a, int b); // ��������(���������� ������� - function declaration)
int Dif(int a, int b);
int Product(int a, int b);
double Quotient(double a, double b);
int reminder(int a, int b);
int factorial(int n);
double Power(double a, int n);

void main()
{
	setlocale(LC_ALL, "");

	int a, b, n;

	cout << "������� ��� �����: "; cin >> a >> b;

	int c = Sum(a, b); //������������� �������(����� Function call)
	cout << a << " + " << b << " = " << c << endl;						
	cout << a << " - " << b << " = " << Dif        (a, b) << endl;
	cout << a << " * " << b << " = " << Product    (a, b) << endl;
	cout << a << " / " << b << " = " << Quotient   (a, b) << endl;
	//cout << a << " % " << b << " = " << reminder   (a, b) << endl;
	cout << a << " ^ " << b << " = " << Power(a, b) << endl;
	cout << "������� ����� ��� ���������� ����������: "; cin >> n;
	cout << n << "! = " << factorial(n) << endl;
} 
int Sum(int a, int b) //���������� � ����������� ������� (Function definition) 
{
	int c = a + b;
	return c;
}
int Dif(int a, int b)
{
	//Difference - ��������
	return a - b;
}
int Product(int a, int b)
{
//Multiplication - ���������
	return a * b;
}
double Quotient(double a, double b)
{
	//Quotient - �������

	return a / b;
}
int reminder(int a, int b)
{
	return a % b;
}
int factorial(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
double Power(double a, int n)
{
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;

	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;

}