#include "adminn.h"
#include "neurona.h"

void adminN::agregarInicio(const Neurona &neurona) {
    listaNeuronas.prepend(neurona);
}

void adminN::agregarFinal(const Neurona &neurona){
    listaNeuronas.append(neurona);
}

void adminN::mostrar(){
    for (const Neurona &neurona : listaNeuronas){
        neurona.print();
    }
}
