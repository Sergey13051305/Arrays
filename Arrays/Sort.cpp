#include"Sort.h"
#include"stdafx.h"
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' Выбирает элемент, в который нужно поместить минимальное значение из перебираемых
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				//Счетчик "j" - перебирает элементы в поисках минимального
				//arr[i] - Выбранный элемент
				//arr[j] - Перебираемый элемент
				if (arr[j] < arr[i])
				{
					arr[i] ^= arr[j];
					arr[j] ^= arr[i];
					arr[i] ^= arr[j];
				}
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//arr[i][j] - Выбранный элемент
					//arr[k][l] - Перебираемый элемент
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
					iterations++;
				}
			}
		}
	}
	cout << "Массив остартироован за " << iterations << " итераций" << endl;
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//arr[i][j] - Выбранный элемент
					//arr[k][l] - Перебираемый элемент
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] = arr[i][j] + arr[k][l];
						arr[k][l] = arr[i][j] - arr[k][l];
						arr[i][j] = arr[i][j] - arr[k][l];
					}
					iterations++;
				}
			}
		}
	}
	cout << "Массив остартироован за " << iterations << " итераций" << endl;
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//arr[i][j] - Выбранный элемент
					//arr[k][l] - Перебираемый элемент
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
					iterations++;
				}
			}
		}
	}
	cout << "Массив остартироован за " << iterations << " итераций" << endl;
}