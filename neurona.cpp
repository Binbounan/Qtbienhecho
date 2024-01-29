#include "neurona.h"
#include <iostream>

Neurona::Neurona(int id, float voltaje, int posX, int posY, int red, int green, int blue)
: id(id), voltaje(voltaje), posX(posX), posY(posY), red(red), green(green), blue(blue) {}

void Neurona::print() const {
    std::cout << "ID: " << id << "\n";
    std::cout << "Voltaje: " << voltaje << "\n";
    std::cout << "Posicion X: " << posX << "\n";
    std::cout << "Posicion Y: " << posY << "\n";
    std::cout << "Color (RGB): " << red << ", " << green << ", " << blue << "\n";
    std::cout << "-----------------\n";
}
