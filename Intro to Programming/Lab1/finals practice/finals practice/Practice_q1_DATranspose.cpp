#include<iostream>
using namespace std;
void transposematrix(int** matrix, int size)
{
	int** TransposedMatrix = new int* [size];
	for (int i = 0; i < size; i++)
	{
		TransposedMatrix[i] = new int[size];

	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			TransposedMatrix[i][j] = matrix[j][i];

		}
	}
	cout << "original matrix is";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j];
		}
		cout << "\n";
	}
	cout << "transposed matrix is";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << TransposedMatrix[i][j];
		}
		cout << "\n";

	}

}

int main()
{
	int size = 3;
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++)
	{
		matrix[i] = new int [size];
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = i * size + j + 1;
		}
	}
	transposematrix(matrix, size);
}