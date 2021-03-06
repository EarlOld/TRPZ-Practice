#include <iostream>
#include <typeinfo>
#include <string>
#include <cmath>

using namespace std;

/* ������� ���������� ���� �������� ��������[a, b]. */
int Sum(int a, int b)
{
	int sum = 0;
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i(a); i <= b; i++)
	{
		sum += i;
	}
	return sum;
}

/* ������� ���������� ������� �������� �������� [a,b]. */
double Dobut(double a, double b)
{
	int dob = 1;
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i(a); i <= b; i++)
	{
		dob *= i;
	}
	return dob;
}

typedef unsigned long long ull;
/* ������� ���������� ��������� �����. */
ull Factorial(long n)
{
	if (n >= 0)
	{
		if (n == 0)
			return 1;
		return n*Factorial(n - 1);
	}
	else return NULL;
}

/* ������� ����������� ����������� �������� ���� */
int Min(int* arr, const int n)
{
	int min = 0;
	for (int i(1); i < n; i++)
	{
		if (arr[min] > arr[i])
			min = i;
	}
	return min;
}

/* ������� ���������� ���� �����������: y = 0.01*exp(-0.5*x) + 0.05*x^3 ��� x = (-10..20); y < 0 || y > 90 */
double SumOrder(const int st = -20, const int fn = 10)
{
	double y, sum = 0;
	for (int x(st); x <= fn; x++)
	{
		y = pow(x, 4) - 10.2*pow(x, 3) - pow(x, 2) + 2.1*x + 37.7;
		cout << '\t' << y << endl;
		if (y < 2 * x)
			sum += y;
	}
	return sum;
}

/* ���������� ��������������� �� ����������� �� � ������� ��� ���������� ��������. */
#define PLUS +
#define MINUS -
#define STAR *
#define SLASH /
#define RIGHT >>
#define AMP &
#define RATE %
#define Addition(a, b) (a PLUS b)
#define Subtraction(a, b) (a MINUS b)
#define Multiplication(a, b) (a STAR b)
#define Division(a, b) (a SLASH b)
#define LandslideRight(a, b) (a RIGHT b)
#define BinMultiplication(a, b) (a AMP b)
#define BalanceDivision(a, b) (a RATE b)

int MyFunction(int var, ...)
{
	int rez = var;
	va_list ptr;
	__crt_va_start(ptr, var);
	for ( ; var != '^'; var = __crt_va_arg(ptr, char))
	{
		if(var == '+')
			rez += __crt_va_arg(ptr, int);
		else if(var ==  '-')
			rez -= __crt_va_arg(ptr, int);
		else if (var == '*')
			rez *= __crt_va_arg(ptr, int);	 
		else if (var == '/')
			rez /= __crt_va_arg(ptr, int);
		else if (var == '&')
			rez &= __crt_va_arg(ptr, int);
		else if (var == '%')
			rez %= __crt_va_arg(ptr, int);
	}
	__crt_va_end(ptr);
	return rez;
}

int main(int argc, char** argv)
{
#define CHECK 1

	cout << endl << "Rezult: " << MyFunction(4, '+', 1, '*', 2, '^') << endl;

	int a, b;
	cout << "Enter a, b: ";
	cin >> a >> b;

#if CHECK
	cout << "a + b = " << Addition(a, b) << endl;
	cout << "a - b = " << Subtraction(a, b) << endl;
	cout << "a * b = " << Multiplication(a, b) << endl;
	cout << "a / b = " << Division(a, b) << endl;
	cout << "Division[a, b]: " << Dobut(a, b) << endl;
	cout << "Sum Order: " << SumOrder() << endl;
#else
	const int n = 5;
	int arr[n] = { 1,2,-3,4,5 };
	cout << "Min element array: " << Min(arr, n) << endl;
	cout << "Sum[a, b]: " << Sum(a, b) << endl;
	cout << "a!: " << Factorial(a) << endl;
	cout << "a >> 1 = " << LandslideRight(a, 1) << endl;
	cout << "a & b = " << BinMultiplication(a, b) << endl;
	cout << "a % b = " << BalanceDivision(a, b) << endl;
#endif
	system("pause");
	return NULL;
}