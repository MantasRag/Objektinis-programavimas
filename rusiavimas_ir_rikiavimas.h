#pragma once
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include "studentas.h"

void rikiavimo_budas(int &tipas, int &tvarka);
int dalijimo_budas();

//  Template funkcijos rikiavimui ir grupavimui (kad veiktų ir su vector ir su list)
template <typename Container>
void rusiuoti_studentus(Container& Grupe, int skaiciavimo_metodas, int tipas, int tvarka) {
    if (Grupe.empty()) {
        std::cout << "Klaida. Studentu vektorius tuscias.\n";
        return;
    }
    // Rikiavimas pagal tipą ir tvarką
    if (skaiciavimo_metodas == 1 || (skaiciavimo_metodas == 3 && tipas == 1)) {
        if (tvarka == 1)
            Grupe.sort([](const Studentas& a, const Studentas& b) { return a.rez_vid < b.rez_vid; });
        else
            Grupe.sort([](const Studentas& a, const Studentas& b) { return a.rez_vid > b.rez_vid; });
    } else {
        if (tvarka == 1)
            Grupe.sort([](const Studentas& a, const Studentas& b) { return a.rez_med < b.rez_med; });
        else
            Grupe.sort([](const Studentas& a, const Studentas& b) { return a.rez_med > b.rez_med; });
    }
}

// Funkcija ruosiuoti duomenysm iš vektorių naudojanti std::sort
template <>
inline void rusiuoti_studentus<std::vector<Studentas>>(std::vector<Studentas>& Grupe, 
                                                        int skaiciavimo_metodas, int tipas, int tvarka) {
    if (Grupe.empty()) {
        std::cout << "Klaida. Studentu vektorius tuscias.\n";
        return;
    }
    if (skaiciavimo_metodas == 1 || (skaiciavimo_metodas == 3 && tipas == 1)) {
        if (tvarka == 1)
            std::sort(Grupe.begin(), Grupe.end(),
                 [](const Studentas& a, const Studentas& b) { return a.rez_vid < b.rez_vid; });
        else
            std::sort(Grupe.begin(), Grupe.end(),
                 [](const Studentas& a, const Studentas& b) { return a.rez_vid > b.rez_vid; });
    } else {
        if (tvarka == 1)
            std::sort(Grupe.begin(), Grupe.end(),
                 [](const Studentas& a, const Studentas& b) { return a.rez_med < b.rez_med; });
        else
            std::sort(Grupe.begin(), Grupe.end(),
                 [](const Studentas& a, const Studentas& b) { return a.rez_med > b.rez_med; });
    }
}

// Padalinimas į grupes (>=5 ir <5) - veikia ir vektoriui, ir listui
template <typename Container>
void padalinti_i_grupes(const Container& Grupe, int tipas,
                        Container& maziau5, Container& daugiaulygu5) {
    if (Grupe.empty()) {
        std::cout << "Klaida. Studentų vektorius tuščias.\n";
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
    
    std::cout << "\nStudentai suskirstyti i grupes pagal " 
         << (tipas == 1 ? "vidurkis" : "mediana") << "):\n";
    std::cout << "Studentu su < 5: " << maziau5.size() << std::endl;
    std::cout << "Studentu su >= 5: " << daugiaulygu5.size() << std::endl;
}