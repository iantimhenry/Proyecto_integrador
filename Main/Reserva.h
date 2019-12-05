#ifndef RESERVA_H_
#define RESERVA_H_

#include<iostream>
#include<string>
using namespace std;

#include "Fecha.h"
#include "Departamento.h"

class Reserva{
  private:
    string huesped;
    Fecha entrada;
    Fecha salida;
    float monto;
    Departamento dpto;
  public:
    Reserva();
    Reserva(string, int, int, int, int, int, int, Departamento);
    void setHuesped(string);
    void setEntrada(Fecha);
    void setSalida(Fecha);
    string getHuesped();
    Fecha getEntrada();
    Fecha getSalida();
    void calcularMonto();
    void mostrarReserva();

  
};

Reserva::Reserva(){
}

Reserva::Reserva(string _huesped, int edia, int emes, int eanio, int sdia, int smes, int sanio, Departamento _dpto) : entrada(edia, emes, eanio), salida(sdia, smes, sanio){
  huesped=_huesped;
  monto=0;
  dpto=_dpto;
}

void Reserva::setHuesped(string _huesped){
  huesped=_huesped;
}

void Reserva::setEntrada(Fecha _entrada){
  entrada=_entrada;
}

void Reserva::setSalida(Fecha _salida){
  salida=_salida;
}

string Reserva::getHuesped(){
  return huesped;
}

Fecha Reserva::getEntrada(){
  return entrada;
}

Fecha Reserva::getSalida(){
  return salida;
}

//Creamos una función para calcular el monto.
//No podemos usar un setter porque el valor del monto depende de otras variables
void Reserva::calcularMonto(){
  float auxPrecio=dpto.getPrecioNoche();
  float auxEntrada=entrada.getDia();
  float auxSalida=salida.getDia();
  int dias=auxSalida-auxEntrada;
  monto=(dias*auxPrecio);
}

//Creamos el formato para mostrar los datos de la reserva 
void Reserva::mostrarReserva(){
  cout<<"Nombre del huésped: "<<huesped<<endl;
  cout<<"Departamento: "<<dpto.getNombre()<<endl;
  cout<<"Precio por noche: "<<dpto.getPrecioNoche()<<endl;
  cout<<"Fecha de entrada: "; entrada.mostrarFecha();
  cout<<"Fecha de salida: "; salida.mostrarFecha();
  cout<<"Precio total: "<<monto<<endl;
  cout<<endl;
}

#endif