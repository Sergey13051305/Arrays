#include<iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "Rus");
	//arr[2]  //Обращение к элементу массива на записть
    //cout << arr[2] << endl;//Обращение к элементу массива на чтениме
	//arr[2] = 123; //обращение к элементам массива на запись
	//cout << arr[2] << endl; // обращение ко второму элементу массива на чтение 

	cout << "Введите элементы массива: ";
	const int n = 5;
	int arr[n]{};
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
	sum+= arr[i];
	}
	cout << "Сумма введенная вами массива" << " = " << sum << endl;
	cout << "Среднее арифмитическое" << " = " << (double)sum / n << endl;
	int z;
	int c;
	cout << "Введите элементы массива: ";

	z = arr[4];
	c = arr[4];
	for (int i = 0; i < n; i++)
	{
		z > arr[i] ? z : z = arr[i];
		c < arr[i] ? c : c = arr[i];	
	}
		cout << "Максимальный элемент массива: " << z << endl<< "Минимальный элемент массива: " << c;
}