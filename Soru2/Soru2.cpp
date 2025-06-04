#include <iostream>
using namespace std;

/*Kullanýcýdan bir hafta günü sayýsý (1-7) alarak gün adýný yazdýran 
switch-case programý yazýnýz.*/

int main() {
    int gun;

    cout << "Haftanýn kaçýncý günü (1-7) olduðunu giriniz: ";
    cin >> gun;

    cout << "Girilen sayýya karþýlýk gelen gün: ";

    switch (gun) {
    case 1:
        cout << "Pazartesi";
        break;
    case 2:
        cout << "Salý";
        break;
    case 3:
        cout << "Çarþamba";
        break;
    case 4:
        cout << "Perþembe";
        break;
    case 5:
        cout << "Cuma";
        break;
    case 6:
        cout << "Cumartesi";
        break;
    case 7:
        cout << "Pazar";
        break;
    default:
        cout << "Geçersiz giriþ! Lütfen 1 ile 7 arasýnda bir sayý girin.";
        break;
    }

    cout << endl;
    return 0;
}
