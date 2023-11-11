//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string names[5] = { "Ali", "Zuhair", "Faisal", "Maaz", "Anis" }, temp;
//	char sort;
//	int i, j,min;
//	
//	cout << "For Insertion Sort press i; For Selection Sort press s : \n";
//	cin >> sort;
//
//	if (sort == 'i') {   
//		for (i = 0; i < 5; i++) {
//			temp = names[i];
//			j = i - 1;
//			while (j >= 0 && names[j] > temp) {
//				names[j + 1] = names[j];
//				j--;
//			}
//			names[j + 1] = temp;
//		}
//		
//		cout << "Sorted array by insertion sort is : \n";
//		for (i = 0; i < 5; i++) {
//			cout << names[i]<<"," << "\t";
//		}
//	}
//	else if (sort == 's') { // Selection Sort
//		for (i = 0; i < 4; i++) {
//			min = i;
//			for (j = i + 1; j < 5; j++) {
//				if (names[j] < names[min]) {
//					min = j;
//				}
//			}
//			temp = names[min];
//			names[min] = names[i];
//			names[i] = temp;
//		}
//
//		cout << "Sorted array by selection sort is : \n";
//		for (i = 0; i < 5; i++) {
//			cout << names[i] << "," << "\t";
//		}
//	}
//}
