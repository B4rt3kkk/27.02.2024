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
	Samochody(string m, string k, float poj, float c,int przeb) {

		this->marka = m;
		this->kolor = k;
		this->pojemnosc = poj;
		this->cena = c;
		this->przebieg = przeb;
	}
	void prezentacjaSamochodu() {
		cout << "marka: " << this->marka << "\n";
		cout << "kolor: " << this->kolor << "\n";
		cout << "pojemnosc: " << this->pojemnosc << "\n";
		cout << "cena: " << this->cena << "\n";
		cout << "przebieg: " << this->przebieg << "\n";
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	}
};

int main()
{
	Samochody Lamborgini = Samochody("Lamborgini", "ZLOTY", 2.6, 250.123456789, 100);
	Lamborgini.prezentacjaSamochodu();

	Samochody AstonMartin = Samochody("AstonMartin", "ZIELONY", 2.9, 250.123456789, 100);
	AstonMartin.prezentacjaSamochodu();

	Samochody Ferrari = Samochody("Ferrari", "CZERWONY", 1.4, 250.123456789, 100);
	Ferrari.prezentacjaSamochodu();

	return EXIT_SUCCESS;
}
