#include <iostream>
using namespace std;

/*Günleri temsil eden bir enum oluþturunuz (`Pazartesi`, `Salý`, …). 
Kullanýcýdan bir sayý alarak gün adýný yazdýrýnýz.*/

// enum tanýmý: haftanýn günlerini temsil eder
enum Gun {
    Pazartesi = 1,
    Sali,
    Carsamba,
    Persembe,
    Cuma,
    Cumartesi,
    Pazar,
};

int main() {
    int giris;

    cout << "1-7 arasýnda bir sayý giriniz (1 = Pazartesi, 7 = Pazar): ";
    cin >> giris;

    // enum türüne dönüþtür
    Gun gun = static_cast<Gun>(giris);

    // geçerli aralýk kontrolü
    if (giris < 1 || giris > 7) {
        cout << "Geçersiz giriþ! Lütfen 1 ile 7 arasýnda bir sayý girin." << endl;
    }
    else {
        cout << "Seçilen gün: ";
        switch (gun) {
        case Pazartesi: cout << "Pazartesi"; break;
        case Sali: cout << "Salý"; break;
        case Carsamba: cout << "Çarþamba"; break;
        case Persembe: cout << "Perþembe"; break;
        case Cuma: cout << "Cuma"; break;
        case Cumartesi: cout << "Cumartesi"; break;
        case Pazar: cout << "Pazar"; break;
        }
        cout << endl;
    }

    return 0;
}
