#include "ivesti_rankiniu_budu.h"
#include <iostream>
#include <limits>       // std::numeric_limits
#include "ivesk.h"      // Studentų duomenų įvedimui

using namespace std;

void ivesti_rankiniu_budu(vector<Studentas>& Grupe) {
    int kiek;
    
    // Tikriname studentų skaičiaus įvedimą
    while (true) {
        cout << "\nKiek studentu yra grupeje? ";
        if (cin >> kiek && kiek > 0) {
            break;                                                          // Teisingas įvedimas
        } else {
            cout << "Klaida: studentu skaičius turi buti teigiamas skaicius. Ivesti dar karta.\n";
            cin.clear();                                                    // Nuima failbit
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Išvalo blogą įvestį
        }
    }
    for (int j = 0; j < kiek; j++) {
        cout << "Iveskite " << j + 1 << " studenta:\n";
        Grupe.push_back(ivesk());
    }
}