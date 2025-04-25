#include <iostream>
using namespace std;

int main() {
    // 1) Načtení počtu čísel
    cout << "Zadejte počet čísel N: ";
    int N;
    cin >> N;

    // 2) Inicializace součtu
    double sum = 0.0;

    // 3) Cyklus pro načtení a přičítání každého čísla
    for (int i = 1; i <= N; ++i) {
        cout << "Zadejte " << i << ". číslo: ";
        double x;
        cin >> x;
        sum += x;
    }

    // 4) Výpis výsledku
    cout << "Součet zadaných čísel je: " << sum << endl;
    return 0;
}
