#include "kiek_generuoti.h"
#include <iostream>
#include <limits>

using namespace std;

int kiek_generuoti() {
                int nd_skaicius;
                while (true) {
                    cout << "\nKiek namu darbu pazymiu generuoti kiekvienam studentui? ";
                    if (cin >> nd_skaicius && nd_skaicius > 0) {
                        return nd_skaicius;
                    } else {
                        cout << "Klaida: iveskite teigiama skaicių\n";
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                    }
                }