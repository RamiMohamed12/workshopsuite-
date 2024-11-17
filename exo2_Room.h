#ifndef ROOM_H
#define ROOM_H

#include <string>

class Room {
private:
    int nb_windows;
    std::string color;

public:
    Room(int windows, const std::string& clr) : nb_windows(windows), color(clr) {}

    int getNbWindows() const { return nb_windows; }
    void setNbWindows(int windows) { nb_windows = windows; }

    std::string getColor() const { return color; }
    void setColor(const std::string& clr) { color = clr; }
};

