//#include<iostream>
//using namespace std;
//void declarearray(int** &matrix, int size)
//{
//	matrix= new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		matrix[i] = new int[size];
//	}
//	cout << "enter matrix";
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//
//	cout << "matrix is";
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cout << matrix[i][j]<<" ";
//		}
//		cout << "\n";
//	}
//}
//int main()
//{
//	int size = 3;
//	int** matrix = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		matrix[i] = new int[size];
//		for (int j = 0; j < size; j++)
//		{
//			matrix[i][j] = i * size + j + 1;
//		}
//	}
//	declarearray(matrix, size);
//
//}