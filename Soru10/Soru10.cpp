#include <iostream>
using namespace std;

/*10 elemanl� bir tamsay� dizisi tan�mlay�n�z.
Kullan�c�dan verileri al�p diziyi ters s�rayla yazd�r�n�z.*/

int main() {
    const int N = 10;
    int dizi[N];

    // Kullan�c�dan veri alma
    cout << N << " adet tamsay� giriniz:" << endl;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << ". say�: ";
        cin >> dizi[i];
    }
    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    // Ters s�rayla yazd�rma
    cout << "\nDizinin tersi:" << endl;
    for (int i = N - 1; i >= 0; i--) {
        cout << dizi[i] << " ";
    }
    cout << endl;

    return 0;
}
