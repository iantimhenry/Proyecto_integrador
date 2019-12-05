#ifndef CATALOGO_H_
#define CATALOGO_H_

#include<iostream>
#include<string>
using namespace std;

#include "Departamento.h"

class Catalogo{
  private:  
    Departamento departamentos[100];
    int tempDepartamentos;
    string nombre;
  public:
  //No usamos getters ni setters
  //Usamos una función para agregar departamentos y otra para mostrarlo
    Catalogo();
    Catalogo(string);
    void agregaDepartamento(Departamento);
    void mostrarCatalogo();
};

Catalogo::Catalogo(){
}

Catalogo::Catalogo(string _nombre){
  tempDepartamentos=0;
  nombre=_nombre;
}

//Función para agregar departamentos al catálogo
void Catalogo::agregaDepartamento(Departamento d){
  departamentos[tempDepartamentos]=d;
  tempDepartamentos++;
}

//Formato para mostrar las opciones
void Catalogo::mostrarCatalogo(){
  for(int i=0;i<tempDepartamentos;i++){
    cout<<"Departamento "<<i+1<<endl;
    cout<<"Nombre: "<<departamentos[i].getNombre()<<endl;
    cout<<"Precio: "<<departamentos[i].getPrecioNoche()<<endl;
    cout<<endl;
  }
} 

#endif