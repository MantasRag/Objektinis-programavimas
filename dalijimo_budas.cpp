#include "dalijimo_budas.h"
#include <iostream>
#include <limits>

using namespace std;

int dalijimo_budas() {
    int tipas;
    cout << "\nDalinti pagal:\n";
    cout << "1. Galutini (vidurkis)\n";
    cout << "2. Galutini (mediana)\n";

    while (!(cin >> tipas) || (tipas != 1 && tipas != 2)) {
        cout << "Klaida. Iveskite 1 arba 2\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return tipas;
}