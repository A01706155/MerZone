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

  public:
  void setMetadatos(int, string, int);
  void reducirInventario();
  void getLista();
};

void Vendedor::setMetadatos(int _Cantidad, string _Producto, int _Precio){
  for(int h=0; h<101; h++){
    if(Producto[h] == ""){
      Cantidad[h] = _Cantidad;
      Producto[h] = _Producto;
      Precio[h] = _Precio;
    }
    else{

    }

}

void Vendedor::getLista(){
  for(int h=0; h<51; h++){
    if(Producto[h] == ""){
    }
    else{
      cout<<"Ingresa el número el producto que deseas comprar de la siguiente lista"<<endl;
      cout<<h<<".- Producto: "<<Producto[h]<<", Precio: "<<Precio[h]<<endl;
    }
  }
}

void Vendedor::reducirInventario(){
  //Cantidad[seleccion] = Cantidad[seleccion]-1;
}


#endif