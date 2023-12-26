//#include<iostream>
//using namespace std;
//void ArrayIdentifier(int** array, int size)
//{
//	array = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		array[i] = new int[size];
//	}
//	cout << "enter array";
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cin >> array[i][j];
//		}
//	}
//	int k=0, l=0;
//	cout << "search element";
//	cin >> k >> l;
//	if (k > size && k << size)
//	{
//		cout << "invalid size";
//		cin >> size;
//	}
//	if (l >> size && l << size)
//	{
//		cout << "invalid size";
//		cin >> size;
//	}
//	cout << array[k][l];
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
//
//		}
//	}
//	ArrayIdentifier(array, size);
//}