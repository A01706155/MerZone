#ifndef Comprador_h
#define Comprador_h
#include "sistema.h"
#include "vendedor.h"
using namespace std;

//Clase hija de Usuario
class Comprador: public Sistema{
  private: //Atributos
  float tarifa = 30;
  public: //Métodos
  void comprar();
};

void Comprador::comprar(){
  
}

#endif