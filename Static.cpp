#include"Header.h"
template<typename T>
T  Sum(T Arr[], const int n)
{
	T Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}

template<typename T>
T Sum(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += Arr[i][j];
		}
	}
	return Sum;
}

template<typename T>
T Avg(T Arr[], const int n)
{
	return (T)Sum(Arr, n) / n;
}

template<typename T>
T Avg(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(Arr, ROWS, COLS) / (ROWS*COLS);
}

template<typename T>
T minValueIn(T Arr[], const int n)
{
	T min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)min = Arr[i];
	}
	return min;
}
template<typename T>
T minValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min)min = Arr[i][j];
		}
	}
	return min;
}

template<typename T>
T maxValueIn(T Arr[], const int n)
{
	T max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)max = Arr[i];
	}
	return max;
}

template<typename T>
T maxValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = Arr[0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max)max = Arr[i][j];
		}
	}
	return max;
}