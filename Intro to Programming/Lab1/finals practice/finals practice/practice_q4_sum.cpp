//#include<iostream>
//using namespace std;
//void sumArray(int** array, int size)
//{
//	array = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		array[i] = new int[size];
//	}
//	cout << "input array";
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cin >> array[i][j];
//		}
//	}
//	int result=0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			result += array[i][j];
//		}
//	}
//	cout << result;
//}
//int main()
//{
//	int size = 3;
//	int** array = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		array[i] = new int[size];
//		for (int j = 0; j < size; j++)
//		{
//			array[i][j] = i * size + j + 1;
//		}
//	}
//	sumArray(array, size);
//}