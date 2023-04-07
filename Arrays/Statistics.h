#pragma once
#include"constants.h"
int Sum(const int arr[], const int n);
int Sum(const double arr[], const int n);
int Sum(const char arr[], const int n);

int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS);

double avg(const int arr[], const int n);
double avg(const double arr[], const int n);
double avg(const char arr[], const int n);

double avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double avg(const double arr[ROWS][COLS], const int ROWS, const int COLS);
double avg(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int arr[], const int n);
int minValueIn(const double arr[], const int n);
int minValueIn(const char arr[], const int n);

int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(const int arr[], const int n);
int maxValueIn(const double arr[], const int n);
int maxValueIn(const char arr[], const int n);

int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS);