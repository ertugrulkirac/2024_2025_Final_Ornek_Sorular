#include <iostream>
using namespace std;

/*Bir sayýnýn adresini pointer ile alýp, bu pointer üzerinden deðeri 
iki katýna çýkarýnýz.*/

int main() {
    int sayi;

    cout << "Bir tam sayý giriniz: ";
    cin >> sayi;

    // Pointer tanýmla ve sayi deðiþkeninin adresine iþaret et
    int* ptr = &sayi;

    // Pointer ile deðeri iki katýna çýkar 
    *ptr = *ptr * 2;

    // Sonuçlarý yazdýr
    cout << "Sayý adresi: " << ptr << endl;
    cout << "Yeni deðeri (2 katý): " << *ptr << endl;

    return 0;
}
