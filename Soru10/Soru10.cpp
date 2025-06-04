#include <iostream>
using namespace std;

/*10 elemanlý bir tamsayý dizisi tanýmlayýnýz.
Kullanýcýdan verileri alýp diziyi ters sýrayla yazdýrýnýz.*/

int main() {
    const int N = 10;
    int dizi[N];

    // Kullanýcýdan veri alma
    cout << N << " adet tamsayý giriniz:" << endl;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << ". sayý: ";
        cin >> dizi[i];
    }
    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    // Ters sýrayla yazdýrma
    cout << "\nDizinin tersi:" << endl;
    for (int i = N - 1; i >= 0; i--) {
        cout << dizi[i] << " ";
    }
    cout << endl;

    return 0;
}
