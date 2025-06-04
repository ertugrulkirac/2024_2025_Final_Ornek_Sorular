#include <iostream>
#include <string>
using namespace std;

/*Bir `Book` yap�s� (struct) olu�turun (ad�, yazar�, sayfa say�s�).  
Kullan�c�dan kitap bilgisi al�p bu bilgiyi ekrana yazd�r�n.*/

// Kitap bilgilerini tutacak yap� (struct)
struct Book {
    string ad;
    string yazar;
    int sayfaSayisi;
};

int main() {
    Book kitap;

    cout << "Kitab�n ad�n� giriniz: ";
    getline(cin, kitap.ad);

    cout << "Yazar ad�n� giriniz: ";
    getline(cin, kitap.yazar);

    cout << "Sayfa say�s�n� giriniz: ";
    cin >> kitap.sayfaSayisi;

    cout << "\n--- Kitap Bilgisi ---" << endl;
    cout << "Ad: " << kitap.ad << endl;
    cout << "Yazar: " << kitap.yazar << endl;
    cout << "Sayfa Say�s�: " << kitap.sayfaSayisi << endl;

    return 0;
}
