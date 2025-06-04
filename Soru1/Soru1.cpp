#include <iostream>
#include <string>
using namespace std;

/*Bir `Person` sýnýfý tanýmlayýnýz.Bu sýnýftan türeyen `Student`
sýnýfý olsun.  `Person` sýnýfýnda ad ve soyad, `Student`
sýnýfýnda okul numarasý yer alsýn.Kullanýcýdan öðrenci bilgilerini
alarak ekrana yazdýran programý yazýnýz.*/

// Üst sýnýf (base class)
class Person {
protected:
    string ad;
    string soyad;
public:
    void setPerson(string a, string s) {
        ad = a;
        soyad = s;
    }

    void printPerson() const {
        cout << "Ad: " << ad << ", Soyad: " << soyad << endl;
    }
};

// Alt sýnýf (derived class)
class Student : public Person {
private:
    int okulNo;
public:
    void setStudent(string a, string s, int no) {
        setPerson(a, s);  // üst sýnýf fonksiyonu
        okulNo = no;
    }

    void printStudent() const {
        printPerson();  // üst sýnýf fonksiyonu
        cout << "Okul Numarasý: " << okulNo << endl;
    }
};

int main() {
    Student ogrenci;

    string ad, soyad;
    int numara;

    cout << "Öðrencinin adýný girin: ";
    getline(cin, ad);
    cout << "Öðrencinin soyadýný girin: ";
    getline(cin, soyad);
    cout << "Okul numarasýný girin: ";
    cin >> numara;

    ogrenci.setStudent(ad, soyad, numara);

    cout << "\n--- Öðrenci Bilgileri ---\n";
    ogrenci.printStudent();

    return 0;
}
