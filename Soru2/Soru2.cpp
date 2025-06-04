#include <iostream>
using namespace std;

/*Kullan�c�dan bir hafta g�n� say�s� (1-7) alarak g�n ad�n� yazd�ran 
switch-case program� yaz�n�z.*/

int main() {
    int gun;

    cout << "Haftan�n ka��nc� g�n� (1-7) oldu�unu giriniz: ";
    cin >> gun;

    cout << "Girilen say�ya kar��l�k gelen g�n: ";

    switch (gun) {
    case 1:
        cout << "Pazartesi";
        break;
    case 2:
        cout << "Sal�";
        break;
    case 3:
        cout << "�ar�amba";
        break;
    case 4:
        cout << "Per�embe";
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
        cout << "Ge�ersiz giri�! L�tfen 1 ile 7 aras�nda bir say� girin.";
        break;
    }

    cout << endl;
    return 0;
}
