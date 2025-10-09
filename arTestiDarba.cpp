#include "arTestiDarba.h"
#include <iostream>

using namespace std;

void arTestiDarba() {
    char testi;
    cout << "\nAr norite testi darba su programa? (t/n): ";
    cin >> testi;
    if (testi == 'n' || testi == 'N') {
        cout << "Programa baigiama.\n";
        exit(0);
    }
    cout << "\n";
}