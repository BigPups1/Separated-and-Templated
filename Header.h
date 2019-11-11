#pragma once
#include<iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 5;

template<typename T>
void FillRand(T Arr[], const int n);
template<typename T>
void FillRand(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T Arr[], const int n);
template<typename T>
void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T Arr[], const int n);
template<typename T>
void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(T Arr[], const int n);          //Прототип функции - Function declaration
template<typename T>
T Sum(T Arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
T Avg(T Arr[], const int n);
template<typename T>
T Avg(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T  minValueIn(T Arr[], const int n);
template<typename T>
T minValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T  maxValueIn(T Arr[], const int n);
template<typename T>
T maxValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS);
