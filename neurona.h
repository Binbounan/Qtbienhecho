#ifndef NEURONA_H
#define NEURONA_H

class Neurona
{
private:
    int id;
    float voltaje;
    int posX;
    int posY;
    int red;
    int green;
    int blue;

public:
    Neurona(int id, float voltaje, int posX, int posY, int red, int green, int blue);
    void print() const;
};

#endif // NEURONA_H
