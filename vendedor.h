#ifndef Vendedor_h
#define Vendedor_h

#include <iostream>
#include<stdlib.h>
#include "sistema.h"

class Vendedor : public Sistema{
  private:
  int Cantidad[102];
  string Producto[102];
  int Precio[102];
  float n;

  public:
  void setMetadatos(int, string, int);
  void getLista();
  int getPrecio(float);
};

void Vendedor::setMetadatos(int _Cantidad, string _Producto, int _Precio){
  for (int h=0; h<101; h++){
    if(Producto[h] == ""){
      Cantidad[h] = _Cantidad;
      Producto[h] = _Producto;
      Precio[h] = _Precio;
      h = 102;
    }
    else{

    }
  }
}

void Vendedor::getLista(){
  for(int h=0; h<101; h++){
    if(Producto[h] == ""){
    }
    else{
      cout<<"Ingresa el número el producto que deseas comprar de la siguiente lista"<<endl;
      cout<<h<<".- Producto: "<<Producto[h]<<", Precio: "<<Precio[h]<<endl;
    }
  }
}

int Vendedor::getPrecio(float _n){
  n = _n;
  int na;
  na = _n;
  return Precio[na];
}

#endif