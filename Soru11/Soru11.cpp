#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*Bir “kullanýcý kayýt sistemi” tasarlayýn. Kullanýcý ad, soyad ve 
þifre girsin. Bu bilgileri bir dosyaya yazýn ve dosyadan okuyup 
doðrulama yapýn*/


int main() {
    string ad, soyad, sifre;

    // 1. Kayýt alma
    cout << "Kullanýcý kayýt iþlemi\n";
    cout << "Ad girin: ";
    getline(cin, ad);

    cout << "Soyad girin: ";
    getline(cin, soyad);

    cout << "Þifre girin: ";
    getline(cin, sifre);

    // Dosyaya yazma
    ofstream dosya("kullanici.txt");
    if (!dosya) {
        cerr << "Dosya açýlamadý!" << endl;
        return 1;
    }
    dosya << ad << " " << soyad << " " << sifre;
    dosya.close();

    cout << "\n--- Giriþ ekraný ---\n";

    // 2. Giriþ doðrulama
    string girisAd, girisSoyad, girisSifre;
    cout << "Ad girin: ";
    getline(cin, girisAd);

    cout << "Soyad girin: ";
    getline(cin, girisSoyad);

    cout << "Þifre girin: ";
    getline(cin, girisSifre);

    // Dosyadan okuma
    ifstream dosyaOku("kullanici.txt");
    string kayitAd, kayitSoyad, kayitSifre;

    if (!(dosyaOku >> kayitAd >> kayitSoyad >> kayitSifre)) {
        cerr << "Dosya okunamadý veya kayýt yok!" << endl;
        return 1;
    }

    // Doðrulama
    if (girisAd == kayitAd && girisSoyad == kayitSoyad && girisSifre == kayitSifre) {
        cout << "Giriþ baþarýlý. Hoþ geldiniz, " << girisAd << "!" << endl;
    }
    else {
        cout << "Giriþ baþarýsýz. Bilgiler eþleþmiyor!" << endl;
    }

    return 0;
}
