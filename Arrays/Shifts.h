#pragma once
#include"constants.h"

void ShiftLeft(int arr[], const int n, int number_of_shift);
void ShiftLeft(double arr[], const int n, int number_of_shift);
void ShiftLeft(char arr[], const int n, int number_of_shift);

void ShiftLeft(const int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void ShiftLeft(const double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void ShiftLeft(const char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);

void ShiftRight(int arr[], const int n, int number_of_shift);
void ShiftRight(double arr[], const int n, int number_of_shift);
void ShiftRight(char arr[], const int n, int number_of_shift);

void ShiftRight(const int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void ShiftRight(const double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void ShiftRight(const char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);