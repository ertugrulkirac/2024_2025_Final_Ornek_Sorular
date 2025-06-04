#include <iostream>
#include <string>
using namespace std;

/*Bir `Car` sýnýfý oluþturun. Özellikleri: marka, model, yýl. 
Sýnýf içinde bilgileri yazdýran bir fonksiyon yazýn.*/

// Car sýnýfý tanýmý
class Car {
private:
    string marka;
    string model;
    int yil;

public:
    // Deðerleri ayarlamak için fonksiyon
    void setBilgiler(string m, string mdl, int y) {
        marka = m;
        model = mdl;
        yil = y;
    }

    // Bilgileri yazdýran fonksiyon
    void yazdir() const {
        cout << "Araba Bilgileri:\n";
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Yýl: " << yil << endl;
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

    cout << "Yýl girin: ";
    cin >> yil;

    araba.setBilgiler(marka, model, yil);

    cout << "\n--- Araç Bilgisi ---" << endl;
    araba.yazdir();

    return 0;
}
