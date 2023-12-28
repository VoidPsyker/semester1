#include<iostream>
#include<string>
using namespace std;
struct bookdetail
{
	string title;
	string author;
	int year;
};
void detail(bookdetail& book)
{
	cout << "enter book title"<<"\n";
	cin >> book.title;
	cout << "enter author name"<<"\n";
	cin >> book.author;
	cout << "enter published year"<<"\n";
	cin >> book.year;
}
void display(bookdetail& book) 
{
	cout << "title is:" << book.title<<"\n";
	cout << "author is" << book.author<<"\n";
	cout << "publish year is" << book.year<<"\n";
}
int main()
{
	bookdetail mybook;
	detail(mybook);
	cout << "book details are"<<"\n";
	display(mybook);
	return 0;
}