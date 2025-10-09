#include "rusiuoti_studentus.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

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
