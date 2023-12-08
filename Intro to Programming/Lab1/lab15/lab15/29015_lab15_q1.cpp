#include<iostream>
#include<string>
using namespace std;
struct booktype
{
	string title;
	int code;
	double price;
};

booktype* IAT(booktype* b1, booktype* b2)
{
	if (b1->price > b2->price)
	{
		return b1;
	}
	else if (b1->price < b2->price)
	{
		return b2;
	}
	else
	{
		cout << "both are same";
	}
	return 0;
}

int main()
{
	int b1, b2;
	booktype books[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "enter title,code and price";
		cin >> books[i].title >> books[i].code >> books[i].price;
	}
	int index1, index2;
	cout << "enter two index 1-10";
	cin >> index1 >> index2;
	booktype* behterprice = IAT(&books[index1], &books[index2]);
	if (behterprice != 0)
	{
		cout << "higher priced book is" << behterprice->title << behterprice->code << behterprice->price;
	}
	return 0;
}
