#include <iostream>
using namespace std;

/*Kullanýcýnýn girdiði bir sayýnýn asal olup olmadýðýný for döngüsü 
kullanarak belirleyiniz.*/

int main() {
    int sayi;
    bool asal = true;

    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    // Negatif veya 0-1 için özel durumlar
    if (sayi <= 1) {
        asal = false;
    }
    else {
        for (int i = 2; i <= sayi / 2; i++) {
            if (sayi % i == 0) {
                asal = false;
                break;
            }
        }
    }

    // Sonuç yazdýrma
    if (asal)
        cout << sayi << " bir asal sayýdýr." << endl;
    else
        cout << sayi << " asal deðildir." << endl;

    return 0;
}
