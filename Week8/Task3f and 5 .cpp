#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

struct Book {

	string name;
	int BookLength;
	float BookPrice;
};

void bubbleSortBookLength(Book Books[], int Size);
void bubbleSortBookPrice(Book Books[], int Size);
void showBook(const Book p);
void randString(string& str);
void Cout(Book Books[], int Size);
void File(Book Books[], int Size);

int main() {

	int const Size = 15;
	Book Books[Size];
	cout << "The name of Book\t" << "BookLength\t" << "BookPrice\n";
	for (int i = 0; i < Size; i++)
	{
		Books[i].BookLength = 10 + rand() % 30;
		Books[i].BookPrice = 50 + rand() % 400;
		randString(Books[i].name);
		showBook(Books[i]);

	}

	Cout(Books, Size);
	File(Books, Size);

	return 0;
}


void randString(string& str) {
	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	str = "     ";


	for (int i = 0; i < str.length(); i++) {
		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];
	}
	str[str.length()] = 0;
}

void showBook(const Book p) {

	cout << "\t" << p.name << "\t\t\t"
		<< p.BookLength << "\t\t"
		<< "   " << p.BookPrice << endl;
}

void bubbleSortBookPrice(Book Books[], int Size) {
	int j = 0;
	Book tmp;
	for (int i = 0; i < Size; i++) {
		for (int j = Size - 1; j >= i + 1; j--) {
			if (Books[j].BookPrice > Books[i].BookPrice)
			{ 
				tmp = Books[i];
				Books[i] = Books[j];
				Books[j] = tmp;
			}
		}
	}
}

void bubbleSortBookLength(Book Books[], int Size) {
	int j = 0;
	Book tmp;
	for (int i = 0; i < Size; i++) {
		for (int j = Size - 1; j >= i + 1; j--) {
			if (Books[j].BookLength > Books[i].BookLength) 
			{  
				tmp = Books[i];
				Books[i] = Books[j];
				Books[j] = tmp;
			}
		}
	}
}

void Cout(Book Books[], int Size) {
	cout << endl << "                        Sorted BookPrice" << endl << endl;
	cout << "The name of Book\t" << "   BookLength\t" << "      BookPrice\n";
	bubbleSortBookPrice(Books, Size);

	for (int i = 0; i < Size; i++)
		showBook(Books[i]);

	cout << endl << "                         Sorted BookLength" << endl << endl;
	cout << "The name of Book\t" << "   BookLength\t" << "      BookPrice\n";
	bubbleSortBookLength(Books, Size);

	for (int i = 0; i < Size; i++)
		showBook(Books[i]);
}

void File(Book Books[], int Size) {
	fstream f;
	f.open("data2.txt", ios::out | ios::trunc);
	f << endl << "                        Sorted BookPrice" << endl << endl;
	f << "The name of Book\t" << "   BookLength\t" << "      BookPrice\n";
	bubbleSortBookPrice(Books, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << Books[i].name << "\t\t\t"
		<< Books[i].BookLength << "\t\t"
		<< "   " << Books[i].BookPrice << endl;

	f << endl << "                 Sorted BookLength" << endl << endl;
	f << "The name of Book\t" << "   BookLength\t" << "      BookPrice\n";
	bubbleSortBookLength(Books, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << Books[i].name << "\t\t\t"
		<< Books[i].BookLength << "\t\t"
		<< "   " << Books[i].BookPrice << endl;
	f.close();
}