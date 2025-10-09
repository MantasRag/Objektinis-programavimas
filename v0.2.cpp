// v0.2
#include <iostream>         // Leidžia naudoti cin ir cout
#include <iomanip>          // Leidžia formatuoti išvestį
#include <vector>           // Leidžia įvesti vektorius
#include <string>           // Leidžia įvesti string tipo kintamuosius
#include <limits>           // Naudojama valyti įvesties srautą

#include "arTestiDarba.h"           // Patikrina ar vartotojas nori tęsti darbą su programa
#include "generuoti_atsitiktinius.h" // Studentų duomenų generavimui
#include "generuoti_i_txt.h"        // Testavimo failų generavimui
#include "issaugoti_i_txt.h"        // Duomenų išsaugojimui į txt failą
#include "ivesk.h"                  // Studentų duomenų įvedimui
#include "ivesti_is_failo.h"        // Studentų duomenų įvedimui iš failo
#include "ivesti_rankiniu_budu.h"   // Studentų duomenų įvedimui rankiniu būdu
#include "mediana.h"                // Medianos skaičiavimui
#include "padalinti_i_grupes.h"     // Studentų grupavimui
#include "pasirinkti_skaiciavimo_metoda.h" // Galutinio pažymio skaičiavimo metodo pasirinkimui
#include "rodyti_menu.h"            // Meniu rodymui
#include "rusiuoti_studentus.h"     // Studentų rikiavimui
#include "skaiciuoti_rezultatus.h"  // Studentų rezultatų skaičiavimui
#include "spausdinti_rezultatus.h"  // Studentų rezultatų spausdinimui konsolės lange
#include "studentas.h"              // Studentų duomenų struktūrai

using namespace std;

int main() {
    vector<Studentas> Grupe;
    vector<Studentas> maziau5;
    vector<Studentas> daugiaulygu5;
    int pasirinkimas;
    int skaiciavimo_metodas = pasirinkti_skaiciavimo_metoda();
    
    while (true) {
        rodyti_menu();
        cout << "Pasirinkite veiksmą (1-5): ";
        if (cin >> pasirinkimas) {
            switch (pasirinkimas) {
                case 1:
                    ivesti_rankiniu_budu(Grupe);
                    if (!Grupe.empty()) {
                        skaiciuoti_rezultatus(Grupe, skaiciavimo_metodas);
                        spausdinti_rezultatus(Grupe, skaiciavimo_metodas);
                        arTestiDarba();
                    }
                    break;
                case 2:
                    ivesti_is_failo(Grupe, "stud1000000.txt");
                    if (!Grupe.empty()) {
                        skaiciuoti_rezultatus(Grupe, skaiciavimo_metodas);
                        spausdinti_rezultatus(Grupe, skaiciavimo_metodas);
                        arTestiDarba();
                    }
                    break;
                case 3:
                    generuoti_atsitiktinius(Grupe);
                    if (!Grupe.empty()) {
                        skaiciuoti_rezultatus(Grupe, skaiciavimo_metodas);
                        spausdinti_rezultatus(Grupe, skaiciavimo_metodas);
                        arTestiDarba();
                    }
                    break;
                case 4:
                    generuoti_i_txt();
                    break;
                case 5: // v0.2 versijos visa užduotis.
                    ivesti_is_failo(Grupe, "stud10000.txt");
                    if (!Grupe.empty()) {
                        skaiciuoti_rezultatus(Grupe, skaiciavimo_metodas);
                        rusiuoti_studentus(Grupe, skaiciavimo_metodas);
                        padalinti_i_grupes(Grupe, skaiciavimo_metodas, maziau5, daugiaulygu5);
                        issaugoti_i_txt(maziau5, "Maziau_5", skaiciavimo_metodas);
                        issaugoti_i_txt(daugiaulygu5, "Daugiau_lygu_5", skaiciavimo_metodas);
                        arTestiDarba();
                    }
                case 6:
                    cout << "Programa baigta.\n";
                    return 0;
                default:
                    cout << "Klaida: pasirinkite skaičių nuo 1 iki 5!\n\n";
                    break;
            }
        } else {
            cout << "Klaida: įveskite teisingą skaičių!\n\n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return 0;
}
