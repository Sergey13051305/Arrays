#pragma once
#include"constants.h"
#include"stdafx.h"

void Fillrand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void Fillrand(double arr[], const int n, double minRand = 0, double maxRand = 100);
void Fillrand(char arr[], const int n);

void Fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void Fillrand(double arr[ROWS][COLS], const int ROWS, const int COLS, double minRand = 0, double maxRand = 100);
void Fillrand(char arr[ROWS][COLS], const int ROWS, const int COLS, char minRand = 0, char maxRand = 100);

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);

void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS);