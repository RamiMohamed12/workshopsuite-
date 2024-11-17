#ifndef SCHOOLBUS_H
#define SCHOOLBUS_H

#include "Bus.h"
#include <string>

class SchoolBus : public Bus {
private:
    std::string school_name;

public:
   
    SchoolBus(const std::string& sn) : school_name(sn) {}

    std::string getSchoolName() const { return school_name; }
    void setSchoolName(const std::string& sn) { school_name = sn; }
};

static int countbigbus(SchoolBus buses[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (buses[i].getseating_capacity() >= 40 && buses[i].getmileage() < 200000) {
            ++count;
        }
    }
    return count;
}


