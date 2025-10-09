#include "padalinti_i_grupes.h"  
#include <vector>
#include <iostream>

using namespace std;

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
    cout << "Studentu su ≥ 5: " << daugiaulygu5.size() << endl;
}
