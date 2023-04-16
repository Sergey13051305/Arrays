#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.cpp"
#include "Statistics.cpp"
#include "Sort.cpp"
#include "Shifts.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << delimiter;
	Sort(arr, n);
	Print(arr, n);
	cout << delimiter;
	 
	int number_of_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	cout << delimiter;
	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
	cout << "Сумма элементов масива: " << Sum(d_arr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов масива: " << Avg(d_arr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, SIZE) << endl;
	cout << delimiter;
	Sort(d_arr, SIZE);
	Print(d_arr, SIZE);
	cout << delimiter;

	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(d_arr, SIZE, number_of_shifts);
	Print(d_arr, SIZE);

	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(d_arr, SIZE, number_of_shifts);
	Print(d_arr, SIZE);
	cout << delimiter;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << "Сумма элементов двумерного массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее - арифметическое двумерного элементов масива :" << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в двумерном массиве : " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в двумерном массиве : " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << delimiter;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

