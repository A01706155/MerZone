#ifndef Sistema_h
#define Sistema_h

#include<stdlib.h>

using namespace std;
//Clase hija de sistema
class Sistema{
  protected: //Atributos
    string action;
    string usuario[52];
    string contrasenia[52];
    string selec_vendedor;
  public: //Métodos
    Sistema(); //Constructor
    void accion(string, string, string);
    int temporal;
    int logintrue;
    void setLLoginTrue();
    int getLLoginTrue();
};

Sistema::Sistema(){
}

void Sistema::accion(string _action, string _usuario, string _contrasenia){
  action = _action;
  usuario[51] = _usuario;
  contrasenia[51] = _contrasenia;

  if (action == "Registro"){
    for(int h=0; h<51; h++){
      if(usuario[h] == ""){
        cout<<"Se registró el usuario numero "<<h<<endl;;
        usuario[h] = usuario[51];
        contrasenia[h] = contrasenia[51];
        cout<<"Nombre: "<<usuario[h]<<"\nContraseña: "<<contrasenia[h]<<"\n"<<endl;
        temporal = h;
        h=52;
      }
      else{
        
      }
    }
  }
  else{
    for(int h=0; h<51; h++){
      if(usuario[h] == usuario[51] && contrasenia[h] == contrasenia[51]){
        cout<<"Bienvenido/a "<<usuario[h]<<endl;
        h = 52;
        logintrue = 1;
      }
      else{

      }
    }
    if (logintrue == 1){
    }
    else{
      cout<<"Error, usuario o contrasena incorrectos\n"<<endl;
    }
  }

}

int Sistema::getLLoginTrue(){
  return logintrue;
}

void Sistema::setLLoginTrue(){
  logintrue = 0;
}

#endif

