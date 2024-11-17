#ifndef BUS_H
#define BUS_H

#include "Vehicule.h"
#include <iostream>

class Bus : public Vehicule {
private:
    int seat_capacity;

public:
    Bus() : seat_capacity(10) {}


    int getseating_capacity() const { return seat_capacity; }
    void setseating_capacity(int capacity) {
        if (capacity >= 10 && capacity <= 50) {
            seat_capacity = capacity;
        } else {
            seat_capacity = 50;
        }
    }


    void get_info() const {
        std::cout << "Il s'agit d'un bus d'une capacité de " << seat_capacity 
                  << " places, avec une vitesse maximale de " << getmax_speed()
                  << " km/h et son kilométrage est de " << getmileage() << " km."
                  << std::endl;
    }
};


