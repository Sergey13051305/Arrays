#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3

void main()
{
	setlocale(LC_ALL, "Rus");
	//arr[2]  //Обращение к элементу массива на записть
    //cout << arr[2] << endl;//Обращение к элементу массива на чтениме
	//arr[2] = 123; //обращение к элементам массива на запись
	//cout << arr[2] << endl; // обращение ко второму элементу массива на чтение 

#ifdef TASK_1
	const int n = 5;
	int arr [n]{};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)cin >> arr [i];
	for (int i = 0; i < n; i++)	cout << arr[i]<<" ";
	cout << " Сумма введенная вами массива " << " = " << arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
#endif TASK_1

#ifdef TASK_2
	const int n = 5;
	int arr[n]{};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < n; i++)	cout << arr[i] << " ";
	cout << " Среднее арифметическая массива " << " = " << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4])/5;
#endif TASK_2

#ifdef TASK_3
	const int n = 5;
	int arr[n]{};
	int z;
	int c;
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	z = arr[4];
	c = arr[4];
	for (int i = 0; i < n; i++)
	{
		z > arr[i] ? z : z = arr[i];
		c < arr[i] ? c : c = arr[i];	
	}
		cout << "Максимальный элемент массива: " << z << endl<< "Минимальный элемент массива: " << c;
	
#endif TASK_3
}