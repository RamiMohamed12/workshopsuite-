#include "SchoolBus.h"
#include <iostream>

int main() {
    SchoolBus schoolBuses[3] = { SchoolBus("Ecole Alpha"), SchoolBus("Ecole Beta"), SchoolBus("Ecole Gamma") };

    
    schoolBuses[0].setmax_speed(240);
    schoolBuses[0].setmileage(180000);
    schoolBuses[0].setseating_capacity(45);

    schoolBuses[1].setmax_speed(220);
    schoolBuses[1].setmileage(250000); 
    schoolBuses[1].setseating_capacity(50);

    schoolBuses[2].setmax_speed(200);
    schoolBuses[2].setmileage(150000);
    schoolBuses[2].setseating_capacity(40);

    
    for (int i = 0; i < 3; ++i) {
        std::cout << "Bus " << i + 1 << " (" << schoolBuses[i].getSchoolName() << "):" << std::endl;
        schoolBuses[i].get_info();
        std::cout << std::endl;
    }

   
    int bigBusCount = countbigbus(schoolBuses, 3);
    std::cout << "Nombre de bus scolaires avec une capacité >= 40 et un kilométrage < 200 000 : " 
              << bigBusCount << std::endl;

    return 0;
}
