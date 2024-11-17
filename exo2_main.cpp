#include "House.h"

int main() {
    House myHouse(3);

  
    myHouse.setRoom(0, new Bathroom(1, "Blanc", true)); 
    myHouse.setRoom(1, new Bedroom(2, "Bleu", 2));     
    myHouse.setRoom(2, new Bedroom(1, "Rose", 1));      

    myHouse.printInfo();

    return 0;
}
