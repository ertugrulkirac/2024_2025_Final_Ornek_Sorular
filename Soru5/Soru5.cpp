#include <iostream>
using namespace std;

/*G�nleri temsil eden bir enum olu�turunuz (`Pazartesi`, `Sal�`, �). 
Kullan�c�dan bir say� alarak g�n ad�n� yazd�r�n�z.*/

// enum tan�m�: haftan�n g�nlerini temsil eder
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

    cout << "1-7 aras�nda bir say� giriniz (1 = Pazartesi, 7 = Pazar): ";
    cin >> giris;

    // enum t�r�ne d�n��t�r
    Gun gun = static_cast<Gun>(giris);

    // ge�erli aral�k kontrol�
    if (giris < 1 || giris > 7) {
        cout << "Ge�ersiz giri�! L�tfen 1 ile 7 aras�nda bir say� girin." << endl;
    }
    else {
        cout << "Se�ilen g�n: ";
        switch (gun) {
        case Pazartesi: cout << "Pazartesi"; break;
        case Sali: cout << "Sal�"; break;
        case Carsamba: cout << "�ar�amba"; break;
        case Persembe: cout << "Per�embe"; break;
        case Cuma: cout << "Cuma"; break;
        case Cumartesi: cout << "Cumartesi"; break;
        case Pazar: cout << "Pazar"; break;
        }
        cout << endl;
    }

    return 0;
}
