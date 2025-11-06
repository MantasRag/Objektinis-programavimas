#include "vector_list_testavimas.h"

void testuoti_konteinerius(int skaiciavimo_metodas) {
    std::vector<std::string> failai = {"stud1000.txt", "stud10000.txt", "stud100000.txt", "stud1000000.txt", "stud10000000.txt"};
    std::vector<int> irasai = {1000, 10000, 100000, 1000000, 10000000};

    testuoti<std::vector<Studentas>>(failai, irasai, skaiciavimo_metodas, "vector");
    testuoti<std::list<Studentas>>(failai, irasai, skaiciavimo_metodas, "list");
}