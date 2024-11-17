#ifndef BEDROOM_H
#define BEDROOM_H

#include "Room.h"

class Bedroom : public Room {
private:
    int nb_beds;

public:
  
    Bedroom(int windows, const std::string& clr, int beds)
        : Room(windows, clr), nb_beds(beds) {}

   
    int getNbBeds() const { return nb_beds; }
    void setNbBeds(int beds) { nb_beds = beds; }
};


