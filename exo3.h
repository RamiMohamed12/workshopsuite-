#ifndef OBJET2D_H
#define OBJET2D_H

#include <iostream>


class Objet2D {
public:
    virtual ~Objet2D() {} // Destructeur virtuel
    virtual void m() const { // Méthode virtuelle pour la liaison tardive
        std::cout << "Je suis un objet 2D." << std::endl;
    }
};


class Rectangle : public Objet2D {
public:
    void m() const override { // Redéfinition de la méthode
        std::cout << "Je suis un rectangle." << std::endl;
    }
};


