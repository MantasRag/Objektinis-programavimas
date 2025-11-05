#pragma once
#include <vector>
#include "studentas.h"  // Studentų duomenų struktūrai

void rikiavimo_budas(int &tipas, int &tvarka);
int dalijimo_budas();
void rusiuoti_studentus(std::vector<Studentas>& Grupe, int skaiciavimo_metodas, int tipas, int tvarka);
void padalinti_i_grupes(const std::vector<Studentas>& Grupe, int tipas,
                        std::vector<Studentas>& maziau5, std::vector<Studentas>& daugiaulygu5);