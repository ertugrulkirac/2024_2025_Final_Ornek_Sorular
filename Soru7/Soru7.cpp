#include <iostream>
#include <cmath>
using namespace std;

/*Bir `Shape` sýnýfý oluþturun ve `area()` fonksiyonu olsun.
Bu sýnýftan `Circle` ve `Rectangle` türetin ve kendi area
hesaplamalarýný yazýn.*/

// Taban sýnýf (base class)
class Shape {
public:
	// Taban sýnýfta area fonksiyonu bulunabilir ama override edilmez
	void area() {
		cout << "Bu genel bir þekildir. Alaný bilinmiyor." << endl;
	}
};

// Circle sýnýfý (Daire)
class Circle : public Shape {
public:
	double radius;

	Circle(double r) {
		radius = r;
	}

	// Yeni fonksiyon: virtual kullanýlmadýðý için override deðil
	void area() {
		double sonuc = 3.14 * radius * radius;
		cout << "Daire Alaný: " << sonuc << endl;
	}
};

// Rectangle sýnýfý (Dikdörtgen)
class Rectangle : public Shape {
public:
	double width, height;

	Rectangle(double w, double h) {
		width = w;
		height = h;
	}

	void area() {
		double sonuc = width * height;
		cout << "Dikdörtgen Alaný: " << sonuc << endl;
	}
};

int main() {
	Circle daire(5);
	Rectangle dikdortgen(4, 6);
	Shape sekil;

	daire.area();        // Daire alanýný hesaplar
	dikdortgen.area();   // Dikdörtgen alanýný hesaplar
	sekil.area();   // bilinmiyor


	return 0;
}
