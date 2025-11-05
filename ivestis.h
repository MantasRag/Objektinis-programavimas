#pragma once
#include <vector>
#include "studentas.h"  // Studentų duomenų struktūrai
#include <string>

Studentas ivesk();
void ivesti_rankiniu_budu(std::vector<Studentas>& Grupe);
void ivesti_is_failo(std::vector<Studentas>& Grupe, const std::string& failo_vardas);