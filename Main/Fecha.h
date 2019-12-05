#ifndef FECHA_H_
#define FECHA_H_

#include<iostream>
#include<string>
using namespace std;

class Fecha{
  private:
    int dia, mes, anio;
  public:
    Fecha();
    Fecha(int,int,int);
    int getDia();
    int getMes();
    int getAnio();
    void setDia(int);
    void setMes(int);
    void setAnio(int);
    void mostrarFecha();
};

Fecha::Fecha(){
}

Fecha::Fecha(int _dia, int _mes, int _anio){
  dia=_dia;
  mes=_mes;
  anio=_anio;
}

void Fecha::setDia(int _dia){
  dia=_dia;
}

void Fecha::setMes(int _mes){
  mes=_mes;
}

void Fecha::setAnio(int _anio){
  anio=_anio;
}

int Fecha::getDia(){
  return dia;
}

int Fecha::getMes(){
  return mes;
}

int Fecha::getAnio(){
  return anio;
}

void Fecha::mostrarFecha(){
  cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

#endif