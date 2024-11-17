#ifndef HOUSE_H
#define HOUSE_H

#include "Bathroom.h"
#include "Bedroom.h"
#include <vector>
#include <iostream>

class House {
private:
    std::vector<Room*> rooms;

public:

    House(int nb_rooms) : rooms(nb_rooms, nullptr) {}

    ~House() {
        for (Room* room : rooms) {
            delete room;
        }
    }


    void setRoom(int index, Room* room) {
        if (index >= 0 && index < rooms.size()) {
            rooms[index] = room;
        }
    }

 
    int getNbOfBathroom() const {
        int count = 0;
        for (Room* room : rooms) {
            if (dynamic_cast<Bathroom*>(room)) {
                ++count;
            }
        }
        return count;
    }

  
    int getNbOfBedroom() const {
        int count = 0;
        for (Room* room : rooms) {
            if (dynamic_cast<Bedroom*>(room)) {
                ++count;
            }
        }
        return count;
    }

    void printInfo() const {
        std::cout << "La maison contient " << getNbOfBathroom() << " salle(s) de bain et "
                  << getNbOfBedroom() << " chambre(s)." << std::endl;
    }
};

