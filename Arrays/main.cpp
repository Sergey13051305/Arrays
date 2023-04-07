#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Sort.h"
#include"Shifts.h"
#include"Search.h"

#define arrays_1
#define arrays_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef arrays_1
	int number_of_shift;
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	Fillrand(arr, n, 0, 5);
	UniqueRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифмитическое: " << avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << delimiter << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);

	cout << "Введите количество сдвигов влево: "; cin >> number_of_shift;
	ShiftLeft(arr, n, number_of_shift);
	Print(arr, n);

	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shift;
	ShiftRight(arr, n, number_of_shift);
	Print(arr, n);   //Количество сдвиков влево / вправо
	cout << delimiter << endl;

	const int SIZE = 8;
	double d_arr[SIZE];
	Fillrand(d_arr, SIZE);
	Print(d_arr, SIZE);
#endif
	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	Fillrand(i_arr_2, ROWS, COLS, 10, 20);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифмитическое двумерного массива: " << avg(i_arr_2, ROWS, COLS) << endl;

	cout << delimiter << endl;

	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);cout << endl;
	Search(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;

	Sort(i_arr_2, ROWS, COLS);
	UniqueRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	minValueIn(i_arr_2, ROWS, COLS);
	cout << "Минимальное значение в двумерном массиве " << minValueIn (i_arr_2, ROWS, COLS) << endl;

	maxValueIn(i_arr_2, ROWS, COLS);
	cout << "Максимальное значение в двумерном массиве " << maxValueIn(i_arr_2, ROWS, COLS) << endl;

	cout << delimiter << endl;

	cout << "Введите количество сдвигов влево: "; cin >> number_of_shift;
	Fillrand(i_arr_2, ROWS, COLS, 10, 20);
	ShiftLeft(i_arr_2, ROWS, COLS, number_of_shift);
	Print(i_arr_2, ROWS, COLS);

	cout << "Введите количество сдвигов влево: "; cin >> number_of_shift;
	ShiftRight(i_arr_2, ROWS, COLS, number_of_shift);
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;
}
