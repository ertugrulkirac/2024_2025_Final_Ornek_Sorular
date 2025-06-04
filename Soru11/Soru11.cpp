#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*Bir �kullan�c� kay�t sistemi� tasarlay�n. Kullan�c� ad, soyad ve 
�ifre girsin. Bu bilgileri bir dosyaya yaz�n ve dosyadan okuyup 
do�rulama yap�n*/


int main() {
    string ad, soyad, sifre;

    // 1. Kay�t alma
    cout << "Kullan�c� kay�t i�lemi\n";
    cout << "Ad girin: ";
    getline(cin, ad);

    cout << "Soyad girin: ";
    getline(cin, soyad);

    cout << "�ifre girin: ";
    getline(cin, sifre);

    // Dosyaya yazma
    ofstream dosya("kullanici.txt");
    if (!dosya) {
        cerr << "Dosya a��lamad�!" << endl;
        return 1;
    }
    dosya << ad << " " << soyad << " " << sifre;
    dosya.close();

    cout << "\n--- Giri� ekran� ---\n";

    // 2. Giri� do�rulama
    string girisAd, girisSoyad, girisSifre;
    cout << "Ad girin: ";
    getline(cin, girisAd);

    cout << "Soyad girin: ";
    getline(cin, girisSoyad);

    cout << "�ifre girin: ";
    getline(cin, girisSifre);

    // Dosyadan okuma
    ifstream dosyaOku("kullanici.txt");
    string kayitAd, kayitSoyad, kayitSifre;

    if (!(dosyaOku >> kayitAd >> kayitSoyad >> kayitSifre)) {
        cerr << "Dosya okunamad� veya kay�t yok!" << endl;
        return 1;
    }

    // Do�rulama
    if (girisAd == kayitAd && girisSoyad == kayitSoyad && girisSifre == kayitSifre) {
        cout << "Giri� ba�ar�l�. Ho� geldiniz, " << girisAd << "!" << endl;
    }
    else {
        cout << "Giri� ba�ar�s�z. Bilgiler e�le�miyor!" << endl;
    }

    return 0;
}
