//#include<iostream>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//void print(int array[4][4]);
//void genRandomMatrix(int m, int n)
//{
//	int number[16] = { 0 }, random_matrix[4][4] = { 0 }, count = 0;
//
//	srand(time(0));
//
//	for (int i = 0; i < 4; i++)
//	{
//
//		number[i] = rand() % 2;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			random_matrix[i][j] = number[count];
//			count++;
//
//			print(random_matrix);
//		}
//	}
//
//}
//
//
//
//void print(int array[4][4])
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << array[i][j];
//		}
//	}
//}
//
//
//
//
//
//int main()
//{
//	genRandomMatrix(4, 4);
//}



#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void printMatrix(int array[4][4]);
int findMaxOnesRow(int array[4][4]);
int findMaxOnesCol(int array[4][4]);

void genRandomMatrix(int m, int n) {
    int random_matrix[4][4];

    srand(time(0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            random_matrix[i][j] = rand() % 2;
        }
    }

    
    cout << "Randomly generated matrix:" << endl;
    printMatrix(random_matrix);

   
    int maxRow = findMaxOnesRow(random_matrix);
    int maxCol = findMaxOnesCol(random_matrix);

   
    cout << "The largest row index: " << maxRow << endl;
    cout << "The largest column index: " << maxCol << endl;
}

void printMatrix(int array[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int findMaxOnesRow(int array[4][4]) {
    int maxCount = 0;
    int maxRowIndex = -1;

    for (int i = 0; i < 4; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (array[i][j] == 1) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxRowIndex = i;
        }
    }

    return maxRowIndex;
}

int findMaxOnesCol(int array[4][4]) {
    int maxCount = 0;
    int maxColIndex = -1;

    for (int j = 0; j < 4; j++) {
        int count = 0;
        for (int i = 0; i < 4; i++) {
            if (array[i][j] == 1) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxColIndex = j;
        }
    }

    return maxColIndex;
}

int main() {
    genRandomMatrix(4, 4);

    return 0;
}
