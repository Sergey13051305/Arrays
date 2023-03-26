#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

const int ROWS = 3;
const int COLS = 4;

void Fillrand(int arr[], const int n, int minRand=0,int maxRand=100);
void Fillrand(double arr[], const int n);
void Fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(const int arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);

double avg(const int arr[], const int n);
double avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int arr[], const int n);

int maxValueIn(const int arr[], const int n);

void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[], const int n, int number_of_shift);

void ShiftRight(int arr[], const int n, int number_of_shift);

void UniqueRand(int arr[], const int n);

void Search(int arr[], const int n);

//#define arrays_1
#define arrays_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef arrays_1
	const int n = 10;
	int arr[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	Fillrand(arr, n, 0, 5);
	//UniqueRand(arr, n);

	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� ��������������: " << avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);

	/*int number_of_shift;
	cout << "������� ���������� ������� �����: "; cin >> number_of_shift;
	ShiftLeft(arr, n, number_of_shift);
	Print(arr, n);
	cout << "������� ���������� ������� ������: "; cin >> number_of_shift;
	ShiftRight(arr, n, number_of_shift);
	Print(arr, n);*/   //���������� ������� ����� / ������

	const int SIZE = 8;
	double d_arr[SIZE];
	Fillrand(d_arr, SIZE);
	Print(d_arr, SIZE);
#endif

	int i_arr_2[ROWS][COLS];                    
	Fillrand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2,ROWS, COLS) << endl;
	cout << "������� �������������� " << avg(i_arr_2,ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

void Fillrand(int arr[], const int n, int minRand, int maxRand)
{	
	//rand(); // ���������� ������ ��������� ����� � ��������� �� 0 �� 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Fillrand(double arr[], const int n)
{
	//rand(); // ���������� ������ ��������� ����� � ��������� �� 0 �� 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i]/=100;
	} 
}

void Fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(const int arr[], const int n)
{
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}


int Sum(const int arr[], const int n)
{
	//���������� ����� ��������� �������
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double avg(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		//���������� ����� ��������� �������
		sum += arr[i];
	}
	return (double)sum / n;
}
double avg(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int minValueIn(const int arr[], const int n)
{
	int min;
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValueIn(const int arr[], const int n)
{
	int max;
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//������� 'i' �������� �������, � ������� ����� ��������� ����������� �������� �� ������������
		for (int i = 0; i < n; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				//������� "j" - ���������� �������� � ������� ������������
				//arr[i] - ��������� �������
				//arr[j] - ������������ �������
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
					//arr[i][j] - ��������� �������
					//arr[k][l] - ������������ �������
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
	cout << "������ ������������� �� " << iterations << " ��������" << endl;
}
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
void ShiftRight(int arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n-1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	//ShiftLeft(arr, n, n - number_of_shift);
}
void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;

		for  (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}

}
void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false; // ����������� ��� ������� ����� �� ����������� � ������� �����, �� ��� ����� ���������
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; // ���������� ��, ��� ����� ����������� �����
				break; //��������� ������� �������� � ��� ����������� ��������
			}
		}
		if (met_before)continue; // ��������� ������� ��������, � ��������� � ���������.
		int count = 0; // ������� ����������
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("�������� %i ����������� %i ��� \n", arr[i], count);
		//if (count)cout << "�������� " << arr[i] << " ����������� " << count << " ���" << endl;
	}
}