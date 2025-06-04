#include <iostream>
#include <cmath>
using namespace std;

/*Bir `Shape` s�n�f� olu�turun ve `area()` fonksiyonu olsun.
Bu s�n�ftan `Circle` ve `Rectangle` t�retin ve kendi area
hesaplamalar�n� yaz�n.*/

// Taban s�n�f (base class)
class Shape {
public:
	// Taban s�n�fta area fonksiyonu bulunabilir ama override edilmez
	void area() {
		cout << "Bu genel bir �ekildir. Alan� bilinmiyor." << endl;
	}
};

// Circle s�n�f� (Daire)
class Circle : public Shape {
public:
	double radius;

	Circle(double r) {
		radius = r;
	}

	// Yeni fonksiyon: virtual kullan�lmad��� i�in override de�il
	void area() {
		double sonuc = 3.14 * radius * radius;
		cout << "Daire Alan�: " << sonuc << endl;
	}
};

// Rectangle s�n�f� (Dikd�rtgen)
class Rectangle : public Shape {
public:
	double width, height;

	Rectangle(double w, double h) {
		width = w;
		height = h;
	}

	void area() {
		double sonuc = width * height;
		cout << "Dikd�rtgen Alan�: " << sonuc << endl;
	}
};

int main() {
	Circle daire(5);
	Rectangle dikdortgen(4, 6);
	Shape sekil;

	daire.area();        // Daire alan�n� hesaplar
	dikdortgen.area();   // Dikd�rtgen alan�n� hesaplar
	sekil.area();   // bilinmiyor


	return 0;
}
