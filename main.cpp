#include <iostream>
#include<stdlib.h>
#include "sistema.h"
#include "comprador.h"
#include "vendedor.h"

using namespace std;

int main() {
  int paso1;
  string accion;
  string usuario;
  string pass;
  int paso2;
  int seleccion;

  Sistema *usar = new Sistema;
  Comprador *usar1 = new Comprador;
  Vendedor *usar2 = new Vendedor;
  //Sistema user()
  for (int nunver=0; nunver<99999; nunver++){
    for (int never=0; never<99999; never++){
      for (int nunca=0; nunca<99999; nunca++){
        usar->setLLoginTrue();
        cout<<"Bienvenido a Mercado Zone, ¿Qué deseas hacer?"<<endl;
        cout<<"Escribe 1 para iniciar sesion o 2 para registrarse: ";
        cin>>paso1;
        if (paso1 == 1){
          accion = "Login";
        }
        else{
          accion = "Registro";
        }
        cout<<"Escribe tu usuario: ";
        cin>>usuario;
        cout<<"Escribe tu contraseña: ";
        cin>>pass; cout<<endl;

        

        usar->accion(accion, usuario, pass);
        //user->accion("Registro", "Pepito", "123456");
        //user->accion("Registro", "Juana", "qwerty");
        //user->accion("Registro", "Kaloma", "098765");
        //user->accion("Login","Pepito","soyhacker");
        //user->accion("Login","Juana","qwerty");
          if(usar->getLLoginTrue() == 1){
            nunca = 100000;
          }     
      }
        cout<<"Para vender ingresa 1, para comprar ingresa 2"<<endl;
      cin>>paso2;
      if (paso2 == 1){
        int quant;
        string produc;
        int price;
        cout<<"Ingresa la cantidad a vender: ";
        cin>>quant;
        cout<<"Ingresa el nombre del producto: ";
        cin>>produc;
        cout<<"Ingresa el precio del producto: ";
        cin>>price;
        usar2->setMetadatos(quant, produc, price);
        //usar2->reducirInventario();
      }
      else{
        usar2->getLista();
      }
    }
  }
  

return 0;
}
