#include <iostream>
using namespace std;



class Figury {

	private:
		const float pi = 3.14;
		int r;
		float a;
		float b;
		float h;
		float e;
		float f;
	public:

		Figury(int r1, float a1, float b1, float h1, float e1, float f1) {
			this->r = r1;
			this->a = a1;
			this->b = b1;
			this->h = h1;
			this->e = e1;
			this->f = f1;
		}
		void kolo() {
			cout << "pole kolo: ";
			cout << this->pi * pow(this->r, 2) << endl;
		}
		void kwadrat() {
			cout << "pole kwadratu: ";
			cout << pow(this->a, 2) << endl;
		}
		void trujkont() {
			cout << "pole trujkonta: ";
			cout << (this->a * this->h) / 2 << endl;
		}
		void romb() {
			cout << "pole romba: ";
			cout << (this->e * this->f) / 2 << endl;
		}
};

int main()
{
	setlocale(LC_ALL, "");
	float r, h, a, b, e, f;
	cout << "Podaj a: "; cin >> a;
	cout << "Podaj b: "; cin >> b;
	cout << "Podaj h: "; cin >> h;
	cout << "Podaj r: "; cin >> r;
	cout << "Podaj e: "; cin >> e;
	cout << "Podaj f: "; cin >> f;
	Figury nr(a, b, h, r, e, f);
	nr.kolo();
	nr.kwadrat();
	nr.trujkont();
	nr.romb();



	return EXIT_SUCCESS;
}

