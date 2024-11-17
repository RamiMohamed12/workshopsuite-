#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>

class Vehicule {
private:
    int max_speed;
    int mileage;

public:
  
    Vehicule() : max_speed(240), mileage(0) {}

    
    int getmax_speed() const { return max_speed; }
    void setmax_speed(int speed) {
        if (speed >= 200) {
            max_speed = speed;
        } else {
            max_speed = 240;
        }
    }

    int getmileage() const { return mileage; }
    void setmileage(int km) {
        if (km >= 0) {
            mileage = km;
        } else {
            mileage = 0;
        }
    }
};


