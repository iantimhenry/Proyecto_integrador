#ifndef DEPARTAMENTO_H_
#define DEPARTAMENTO_H_

#include<iostream>
#include<string>
using namespace std;

class Departamento{
  private:
    string nombre;
    float precioNoche;
  public:
    Departamento();
    Departamento(string,float);
    void setNombre(string);
    void setPrecioNoche(float);
    string getNombre();
    float getPrecioNoche();
};

Departamento::Departamento(){
}

Departamento::Departamento(string _nombre, float _precioNoche){
  nombre=_nombre;
  precioNoche=_precioNoche;
}

void Departamento::setNombre(string _nombre){
  nombre=_nombre;
}

void Departamento::setPrecioNoche(float _precioNoche){
  precioNoche=_precioNoche;
}

string Departamento::getNombre(){
  return nombre;
}

float Departamento::getPrecioNoche(){
  return precioNoche;
}

#endif