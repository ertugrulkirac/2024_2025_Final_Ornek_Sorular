#include <iostream>
#include <string>
using namespace std;

/*Bir `Book` yapýsý (struct) oluþturun (adý, yazarý, sayfa sayýsý).  
Kullanýcýdan kitap bilgisi alýp bu bilgiyi ekrana yazdýrýn.*/

// Kitap bilgilerini tutacak yapý (struct)
struct Book {
    string ad;
    string yazar;
    int sayfaSayisi;
};

int main() {
    Book kitap;

    cout << "Kitabýn adýný giriniz: ";
    getline(cin, kitap.ad);

    cout << "Yazar adýný giriniz: ";
    getline(cin, kitap.yazar);

    cout << "Sayfa sayýsýný giriniz: ";
    cin >> kitap.sayfaSayisi;

    cout << "\n--- Kitap Bilgisi ---" << endl;
    cout << "Ad: " << kitap.ad << endl;
    cout << "Yazar: " << kitap.yazar << endl;
    cout << "Sayfa Sayýsý: " << kitap.sayfaSayisi << endl;

    return 0;
}
