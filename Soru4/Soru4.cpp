#include <iostream>
#include <string>
using namespace std;

/*Kullan�c�dan parola al�n. Parola do�ru girilene kadar tekrar
isteyen bir while yap�s� kurun.Maksimum 3 hak tan�y�n.*/

int main() {
    const string dogruParola = "gizli123";  // Sistemde kay�tl� do�ru parola
    string girilenParola;
    int hak = 3;

    while (hak > 0) {
        cout << "Parolay� giriniz: ";
        cin >> girilenParola;

        if (girilenParola == dogruParola) {
            cout << "Giri� ba�ar�l�. Ho� geldiniz!" << endl;
            break;
        }
        else {
            hak--;//2-1-0
            if (hak > 0)
                cout << "Yanl�� parola. Kalan hakk�n�z: " << hak << endl;
            else
                cout << "Giri� hakk�n�z kalmad�. Sistemden ��k�l�yor." << endl;
        }
    }

    return 0;
}
