#include <iostream>
#include <limits>

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
