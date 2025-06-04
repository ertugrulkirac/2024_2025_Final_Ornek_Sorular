#include <iostream>
#include <string>
using namespace std;

/*Bir `Car` s�n�f� olu�turun. �zellikleri: marka, model, y�l. 
S�n�f i�inde bilgileri yazd�ran bir fonksiyon yaz�n.*/

// Car s�n�f� tan�m�
class Car {
private:
    string marka;
    string model;
    int yil;

public:
    // De�erleri ayarlamak i�in fonksiyon
    void setBilgiler(string m, string mdl, int y) {
        marka = m;
        model = mdl;
        yil = y;
    }

    // Bilgileri yazd�ran fonksiyon
    void yazdir() const {
        cout << "Araba Bilgileri:\n";
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Y�l: " << yil << endl;
    }
};

int main() {
    Car araba;
    string marka, model;
    int yil;

    cout << "Marka girin: ";
    getline(cin, marka);

    cout << "Model girin: ";
    getline(cin, model);

    cout << "Y�l girin: ";
    cin >> yil;

    araba.setBilgiler(marka, model, yil);

    cout << "\n--- Ara� Bilgisi ---" << endl;
    araba.yazdir();

    return 0;
}
