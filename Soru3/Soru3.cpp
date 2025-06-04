#include <iostream>
using namespace std;

/*Kullan�c�n�n girdi�i bir say�n�n asal olup olmad���n� for d�ng�s� 
kullanarak belirleyiniz.*/

int main() {
    int sayi;
    bool asal = true;

    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    // Negatif veya 0-1 i�in �zel durumlar
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

    // Sonu� yazd�rma
    if (asal)
        cout << sayi << " bir asal say�d�r." << endl;
    else
        cout << sayi << " asal de�ildir." << endl;

    return 0;
}
