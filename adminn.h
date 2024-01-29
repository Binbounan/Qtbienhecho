#ifndef ADMINN_H
#define ADMINN_H
#include <Qlist>
#include "neurona.h"

class adminN
{
private:
    QList<Neurona> listaNeuronas;

public:
    void agregarInicio(const Neurona &neurona);
    void agregarFinal(const Neurona &neurona);
    void mostrar();
};

#endif // ADMINN_H
