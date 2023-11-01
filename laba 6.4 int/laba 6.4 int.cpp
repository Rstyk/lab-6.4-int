#include<iostream>
#include<iomanip>
#include <time.h>

using namespace std;

void Input(double* a, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}
void Print(double* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(8) << fixed << setprecision(3) << a[i];
	cout << endl;
}
double Max(double* a, const int size)
{
	double max = a[0];
	for (int i = 1; i < size; i++)
		if (fabs(a[i]) > fabs(max))
			max = a[i];
	return max;
}
double Sum(double* a, const int size)
{
	double S = 0;
	double first = -1;
	double second = -1;
	for (int i = 0; i < size; i++)
		if (a[i] > 0)
		{
			first = i;
			break;
		}
	for (int i = first + 1; i < size; i++)
		if (a[i] > 0)
		{
			second = i;
			break;
		}
	if (first == -1)
		cout << "no + elements" << endl;
	if (first != -1 && second == -1)
		cout << "one + elements" << endl;
	for (int i = first + 1; i < second; i++)
		S += a[i];
	return S;
}
void Sort(double* a, const int size)
{
	for (int i = 1; i < size; i++)
	{
		int k = 0;
		for (int j = 0; j < size - i; j++)
			if (a[j] == 0)
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				k = 1;
			}
		if (k == 0)
			return;
	}
}
int main()
{
	int n;
	cout << "n = "; cin >> n;
	double* p = new double[n];

	Input(p, n);

	cout << "a[n] =";
	Print(p, n);
	cout << "module max = " << Max(p, n) << endl;
	cout << "S = " << Sum(p, n) << endl;

	Sort(p, n);
	cout << "a[n] =";
	Print(p, n);
	delete[] p;
	return 0;
}

