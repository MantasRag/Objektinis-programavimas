#include "pasirinkti_skaiciavimo_metoda.h"
#include <iostream>
#include <limits>       // std::numeric_limits

using namespace std;

int pasirinkti_skaiciavimo_metoda() {
    int metodas;
    cout << "Pasirinkite galutinio pazymio skaiciavimo metoda:\n";
    cout << "1. Naudoti vidurki\n";
    cout << "2. Naudoti mediana\n";
    cout << "3. Rodyti abu (vidurkis ir mediana)\n";
    
    while (true) {
        cout << "Jusu pasirinkimas (1-3): ";
        if (cin >> metodas && metodas >= 1 && metodas <= 3) {
            cout << "\n";
            return metodas;
        } else {
            cout << "Klaida: pasirinkite skaiciu nuo 1 iki 3\n";
            cin.clear();                                                    // Nuima failbit
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Išvalo blogą įvestį
        }
    }
}