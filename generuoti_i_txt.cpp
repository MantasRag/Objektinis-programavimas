#include "generuoti_i_txt.h"
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>
#include <iostream>
#include <random>

using namespace std;


void generuoti_i_txt(int stud_skaicius, int nd_skaicius) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> pazymys_dis(1, 10);

    string failo_vardas = "stud" + to_string(stud_skaicius) + ".txt";
    ofstream fout(failo_vardas);

    if (!fout) {
        cout << "Klaida: nepavyko sukurti failo '" << failo_vardas << "'!\n";
        return;
    }

    fout << left << setw(15) << "Vardas" << setw(15) << "Pavarde";
    for (int i = 1; i <= nd_skaicius; i++) {
        fout << setw(5) << ("ND" + to_string(i));
    }
    fout << setw(5) << "Egz." << "\n";

    for (int i = 1; i <= stud_skaicius; i++) {
        fout << left << setw(15) << ("Vardas" + to_string(i))
             << setw(15) << ("Pavarde" + to_string(i));

        for (int j = 0; j < nd_skaicius; j++) {
            fout << setw(5) << pazymys_dis(gen);
        }

        fout << setw(5) << pazymys_dis(gen) << "\n";
    }

    fout.close();
    cout << "Failas '" << failo_vardas << "' sukurtas (" 
         << stud_skaicius << " studentu, po " << nd_skaicius << " pazymius)\n";
}