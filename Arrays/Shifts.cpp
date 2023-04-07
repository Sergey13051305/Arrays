#include"Shifts.h"

void ShiftLeft(int arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(char arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		char buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(const int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0][0];

		for (int j = 0; j < ROWS; j++)
		{
			//arr[i][j] = arr[i][j + 1];
		}
		//arr[i][COLS - 1] = buffer;
	}
}
void ShiftLeft(const double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{

}
void ShiftLeft(const char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{

}

void ShiftRight(int arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	//ShiftLeft(arr, n, n - number_of_shift);
}
void ShiftRight(double arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(char arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		char buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void ShiftRight(const int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0][0];

		for (int j = 0; j < ROWS; j++)
		{
			//arr[i][j] = arr[i][j + 1];
		}
		//arr[i][COLS - 1] = buffer;
	}
}
void ShiftRight(const double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0][0];

		for (int j = 0; j < ROWS; j++)
		{
			//arr[i][j] = arr[i][j + 1];
		}
		//arr[i][COLS - 1] = buffer;
	}
}
void ShiftRight(const char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0][0];

		for (int j = 0; j < ROWS; j++)
		{
			//arr[i][j] = arr[i][j + 1];
		}
		//arr[i][COLS - 1] = buffer;
	}
}