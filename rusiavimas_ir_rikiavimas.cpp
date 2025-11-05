#include "rusiavimas_ir_rikiavimas.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

void rikiavimo_budas(int &tipas, int &tvarka) {
    // Pasirinkimas pagal ką rikiuoti
    std::cout << "\nRikiuoti pagal:\n";
    std::cout << "1. Galutini (vidurkis)\n";
    std::cout << "2. Galutini (mediana)\n";
    std::cout << "Pasirinkimas: ";
    while (!(std::cin >> tipas) || (tipas != 1 && tipas != 2)) {
        std::cout << "Klaida. Iveskite 1 arba 2\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Pasirinkimas: ";
    }

    // Pasirinkimas rikiavimo tvarkos
    std::cout << "\nPasirinkite rikiavimo tvarka:\n";
    std::cout << "1. Didejimo tvarka\n";
    std::cout << "2. Mazejimo tvarka\n";
    while (!(std::cin >> tvarka) || (tvarka != 1 && tvarka != 2)) {
        std::cout << "Klaida. Iveskite 1 arba 2\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

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

void rusiuoti_studentus(vector<Studentas>& Grupe, int skaiciavimo_metodas, int tipas, int tvarka) {
    if (Grupe.empty()) {
        cout << "Klaida. Studentu vektorius tuscias.\n";
        return;
    }

    // Rikiavimas pagal pasirinktas parinktis (tipas ir tvarka)
    if (skaiciavimo_metodas == 1 || (skaiciavimo_metodas == 3 && tipas == 1)) {
        if (tvarka == 1)
            sort(Grupe.begin(), Grupe.end(),
                 [](const Studentas& a, const Studentas& b) { return a.rez_vid < b.rez_vid; });
        else
            sort(Grupe.begin(), Grupe.end(),
                 [](const Studentas& a, const Studentas& b) { return a.rez_vid > b.rez_vid; });
    } else {
        if (tvarka == 1)
            sort(Grupe.begin(), Grupe.end(),
                 [](const Studentas& a, const Studentas& b) { return a.rez_med < b.rez_med; });
        else
            sort(Grupe.begin(), Grupe.end(),
                 [](const Studentas& a, const Studentas& b) { return a.rez_med > b.rez_med; });
    }

    cout << "Studentai surikiuoti.\n\n";
}

void padalinti_i_grupes(const vector<Studentas>& Grupe, int tipas,
                        vector<Studentas>& maziau5, vector<Studentas>& daugiaulygu5) {
    if (Grupe.empty()) {
        cout << "Klaida. Studentų vektorius tuščias.\n";
        return;
    }

    maziau5.clear();
    daugiaulygu5.clear();

    for (const auto& st : Grupe) {
        float rezultatas = (tipas == 1 ? st.rez_vid : st.rez_med);
        if (rezultatas < 5.0f)
            maziau5.push_back(st);
        else
            daugiaulygu5.push_back(st);
    }
    cout << "\nStudentai suskirstyti i grupes pagal " 
         << (tipas == 1 ? "vidurkis" : "mediana") << "):\n";
    cout << "Studentu su < 5: " << maziau5.size() << endl;
    cout << "Studentu su >= 5: " << daugiaulygu5.size() << endl;
}

