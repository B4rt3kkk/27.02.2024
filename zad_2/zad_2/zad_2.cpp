
#include <iostream>
using namespace std;

class Samochody {
private:
	string marka;
	string kolor;
	float pojemnosc;
	float cena;
	int przebieg;
public:
	Samochody(string m, string k, float poj, float c, int przeb) {
		this->marka = m;
		this->kolor = k;
		this->pojemnosc = poj;
		this->cena = c;
		this->przebieg = przeb;
	}

	Samochody(string m, string k) {
		this->marka = m;
		this->kolor = k;
		this->prezentacjaSamochodu2();
	}

	void prezentacjaSamochodu() {
			setlocale(LC_ALL, "");
		cout << "Marka: " << this->marka << "\n";
		cout << "Kolor: " << this->kolor << "\n";
		cout << "Pojemnosc: " << this->pojemnosc << "\n";
		cout << "Cena: " << this->cena << "\n";
		cout << "przbieg: " << this->przebieg << "\n";
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	}

	void prezentacjaSamochodu2() {
		setlocale(LC_ALL, "");
		cout << "#########################################" << endl;
		cout << "Marka: " << this->marka << "\n";
		cout << "Kolor: " << this->kolor << "\n";
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	}
};





int main()
{
	string marka[3] = { "FERRARI", "LAMBORGHINI", "ASTON MARTIN" };
	string kolor[3] = { "ZIELONY", "CZARNY", "CZERWONY" };
	float pojemnosc[3] = { 7.5, 7.6, 7.3 };
	float cena[3] = { 600.343, 780.433, 890.342 };
	int przebieg[3] = { 21.23,11 };

	for (int i = 0; i < 3; i++) {
		Samochody ferrari = Samochody(marka[i], kolor[i], pojemnosc[i], cena[i], przebieg[i]);
		ferrari.prezentacjaSamochodu();
	}

	for (int i = 0; i < 3; i++) {
		Samochody samochod = Samochody(marka[i], kolor[i]);
	}

	return EXIT_SUCCESS;
}
