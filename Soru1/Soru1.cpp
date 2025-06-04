#include <iostream>
#include <string>
using namespace std;

/*Bir `Person` s�n�f� tan�mlay�n�z.Bu s�n�ftan t�reyen `Student`
s�n�f� olsun.  `Person` s�n�f�nda ad ve soyad, `Student`
s�n�f�nda okul numaras� yer als�n.Kullan�c�dan ��renci bilgilerini
alarak ekrana yazd�ran program� yaz�n�z.*/

// �st s�n�f (base class)
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

// Alt s�n�f (derived class)
class Student : public Person {
private:
    int okulNo;
public:
    void setStudent(string a, string s, int no) {
        setPerson(a, s);  // �st s�n�f fonksiyonu
        okulNo = no;
    }

    void printStudent() const {
        printPerson();  // �st s�n�f fonksiyonu
        cout << "Okul Numaras�: " << okulNo << endl;
    }
};

int main() {
    Student ogrenci;

    string ad, soyad;
    int numara;

    cout << "��rencinin ad�n� girin: ";
    getline(cin, ad);
    cout << "��rencinin soyad�n� girin: ";
    getline(cin, soyad);
    cout << "Okul numaras�n� girin: ";
    cin >> numara;

    ogrenci.setStudent(ad, soyad, numara);

    cout << "\n--- ��renci Bilgileri ---\n";
    ogrenci.printStudent();

    return 0;
}
