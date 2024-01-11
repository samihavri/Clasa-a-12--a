#include <iostream>

using namespace std;

// Subprogramul prime
int prime(int n, int a[]) {
    int numarPerechi = 0;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            bool primeIntreEle = true;

            for (int k = 2; k <= min(a[i], a[j]); ++k) {
                if (a[i] % k == 0 && a[j] % k == 0) {
                    primeIntreEle = false;
                    break;
                }
            }

            if (primeIntreEle) {
                numarPerechi++;
            }
        }
    }

    return numarPerechi;
}

int main() {
    // Exemplu de utilizare
    const int n = 5;
    int tablou[n] = {2, 3, 5, 7, 11};

    int rezultat = prime(n, tablou);

    cout << "Numarul de perechi distincte prime intre ele: " << rezultat << endl;

    return 0;
}
