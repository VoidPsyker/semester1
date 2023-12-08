#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Sorted(int arr[], int Index = 0) {

    if (Index == 9) {
        return 1;
    }

    if (arr[Index] <= arr[Index + 1] && Sorted(arr, Index + 1) == 1) {
        return 1;
    }

    if (arr[Index] >= arr[Index + 1] && Sorted(arr, Index + 1) == 2) {
        return 2;
    }
    return 0;
}

int main() {
    std::srand(std::time(0));

    const int arraySize = 10;
    int randomArray[arraySize];


    cout << "Generated random integers: ";
    for (int i = 0; i < arraySize; ++i) {
        randomArray[i] = rand() % 16 + 5;
        cout << randomArray[i] << " ";
    }
    cout << endl;

    int result = Sorted(randomArray);
    if (result == 1) {
        cout << "The array is sorted in ascending order." << endl;
    }
    else if (result == 2) {
        cout << "The array is sorted in descending order." << endl;
    }
    else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
