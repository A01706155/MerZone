#ifndef Comprador_h
#define Comprador_h
#include "sistema.h"
#include "vendedor.h"
using namespace std;

//Clase hija de Usuario
class Comprador: public Sistema{
  private: //Atributos
  int num;
  float tarifa = 30;
  public: //Métodos
  int comprar(int);
};

int Comprador::comprar(int _num){
  num = _num;
  Vendedor e;
  return e.getPrecio(num)+tarifa;
}

#endif