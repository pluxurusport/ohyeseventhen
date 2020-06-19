#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

struct Flower {

	string name;
	int LongFlower;
	float FlowerPrice;
};

void bubbleSortLongFlower(Flower Flowers[], int Size);
void bubbleSortFlowerPrice(Flower Flowers[], int Size);
void showFlower(const Flower p);
void randString(string& str);
void Cout(Flower Flowers[], int Size);
void File(Flower Flowers[], int Size);

int main() {

	int const Size = 15;
	Flower Flowers[Size];
	cout << "The name of Flower\t" << "Flower Long\t" << "FlowerPrice\n";
	for (int i = 0; i < Size; i++)
	{
		Flowers[i].LongFlower = 10 + rand() % 30;
		Flowers[i].FlowerPrice = 50 + rand() % 400;
		randString(Flowers[i].name);
		showFlower(Flowers[i]);

	}

	Cout(Flowers, Size);
	File(Flowers, Size);

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

void showFlower(const Flower p) {

	cout << "\t" << p.name << "\t\t\t"
		<< p.LongFlower << "\t\t"
		<< "   " << p.FlowerPrice << endl;
}

void bubbleSortFlowerPrice(Flower Flowers[], int Size) {
	int j = 0;
	Flower tmp;
	for (int i = 0; i < Size; i++) {
		for (int j = Size - 1; j >= i + 1; j--) {
			if (Flowers[j].FlowerPrice > Flowers[i].FlowerPrice)
			{ 
				tmp = Flowers[i];
				Flowers[i] = Flowers[j];
				Flowers[j] = tmp;
			}
		}
	}
}

void bubbleSortLongFlower(Flower Flowers[], int Size) {
	int j = 0;
	Flower tmp;
	for (int i = 0; i < Size; i++) {
		for (int j = Size - 1; j >= i + 1; j--) {
			if (Flowers[j].LongFlower > Flowers[i].LongFlower) 
			{  
				tmp = Flowers[i];
				Flowers[i] = Flowers[j];
				Flowers[j] = tmp;
			}
		}
	}
}

void Cout(Flower Flowers[], int Size) {
	cout << endl << "                        Sorted FlowerPrice" << endl << endl;
	cout << "The name of Flower\t" << "   Flower Long\t" << "      FlowerPrice\n";
	bubbleSortFlowerPrice(Flowers, Size);

	for (int i = 0; i < Size; i++)
		showFlower(Flowers[i]);

	cout << endl << "                 Sorted Flower Long" << endl << endl;
	cout << "The name of Flower\t" << "   Flower Long\t" << "      FlowerPrice\n";
	bubbleSortLongFlower(Flowers, Size);

	for (int i = 0; i < Size; i++)
		showFlower(Flowers[i]);
}

void File(Flower Flowers[], int Size) {
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << endl << "                        Sorted FlowerPrice" << endl << endl;
	f << "The name of Flower\t" << "   Flower Long\t" << "      FlowerPrice\n";
	bubbleSortFlowerPrice(Flowers, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << Flowers[i].name << "\t\t\t"
		<< Flowers[i].LongFlower << "\t\t"
		<< "   " << Flowers[i].FlowerPrice << endl;

	f << endl << "                 Sorted Flower Long" << endl << endl;
	f << "The name of Flower\t" << "   Flower Long\t" << "      FlowerPrice\n";
	bubbleSortLongFlower(Flowers, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << Flowers[i].name << "\t\t\t"
		<< Flowers[i].LongFlower << "\t\t"
		<< "   " << Flowers[i].FlowerPrice << endl;
	f.close();
}