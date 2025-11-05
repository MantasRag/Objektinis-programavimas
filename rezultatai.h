#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include "studentas.h"  // Studentų duomenų struktūrai

using std::vector;

void skaiciuoti_rezultatus(vector<Studentas>& Grupe, int skaiciavimo_metodas);
void spausdinti_rezultatus(const std::vector<Studentas>& Grupe, int skaiciavimo_metodas);
