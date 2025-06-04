#include <iostream>
using namespace std;

/*Bir say�n�n adresini pointer ile al�p, bu pointer �zerinden de�eri 
iki kat�na ��kar�n�z.*/

int main() {
    int sayi;

    cout << "Bir tam say� giriniz: ";
    cin >> sayi;

    // Pointer tan�mla ve sayi de�i�keninin adresine i�aret et
    int* ptr = &sayi;

    // Pointer ile de�eri iki kat�na ��kar 
    *ptr = *ptr * 2;

    // Sonu�lar� yazd�r
    cout << "Say� adresi: " << ptr << endl;
    cout << "Yeni de�eri (2 kat�): " << *ptr << endl;

    return 0;
}
