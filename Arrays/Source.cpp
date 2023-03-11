#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
int Sum(const int arr[], const int n);
double Avg(const int arr[], const int n);
int MinValueIn (const int arr[], const int n);
int MaxValueIn (const int arr[], const int n);


void main()
{
	setlocale(LC_ALL, "Rus");
	//arr[2]  //Обращение к элементу массива на записть
    //cout << arr[2] << endl;//Обращение к элементу массива на чтениме
	//arr[2] = 123; //обращение к элементам массива на запись
	//cout << arr[2] << endl; // обращение ко второму элементу массива на чтение 
	//rand();
	cout << "Введите элементы массива: ";
	const int n = 10;
	int arr[n]{};
	FillRand(arr, n);
	Print(arr, n);
	int MinValueIn(const int arr[], const int n);
	int MaxValueIn(const int arr[], const int n);
	int Sum(const int arr[], int n);
	cout << endl;
	cout << "Сумма введенная вами массива" << " = " << Sum(arr, n) << endl;
	cout << "Среднее арифмитическое" << " = " << Avg(arr, n) << endl;
	cout << "Максимальный элемент массива: " << MaxValueIn(arr, n)<<endl;
	cout << "Минимальный элемент массива: " << MinValueIn(arr, n)<<endl;
}
void FillRand(int arr[], const int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

int Sum(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(const int arr[], const int n)
{
	return (double) Sum(arr,n)/n;
}

int MinValueIn(const int arr[], const int n)
{	
	int z;
	z = arr[4];
	for (int i = 0; i < n; i++)
	{
		z > arr[i] ? z = arr[i] : z ;
	}
	return z;
}
int MaxValueIn(const int arr[], const int n)
{
	int c;
	c = arr[4];

	for (int i = 0; i < n; i++)
	{
		c < arr[i] ? c=arr[i] : c;
	}
	return c;
}