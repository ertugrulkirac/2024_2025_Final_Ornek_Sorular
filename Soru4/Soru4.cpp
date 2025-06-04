#include <iostream>
#include <string>
using namespace std;

/*Kullanýcýdan parola alýn. Parola doðru girilene kadar tekrar
isteyen bir while yapýsý kurun.Maksimum 3 hak tanýyýn.*/

int main() {
    const string dogruParola = "gizli123";  // Sistemde kayýtlý doðru parola
    string girilenParola;
    int hak = 3;

    while (hak > 0) {
        cout << "Parolayý giriniz: ";
        cin >> girilenParola;

        if (girilenParola == dogruParola) {
            cout << "Giriþ baþarýlý. Hoþ geldiniz!" << endl;
            break;
        }
        else {
            hak--;//2-1-0
            if (hak > 0)
                cout << "Yanlýþ parola. Kalan hakkýnýz: " << hak << endl;
            else
                cout << "Giriþ hakkýnýz kalmadý. Sistemden çýkýlýyor." << endl;
        }
    }

    return 0;
}
