/*
Ian Timothy Henry Suárez
A01701578
*/

#include<iostream>
#include<string>
using namespace std;

#include "string.h"

#include "Fecha.h"
#include "Reserva.h"
#include "Departamento.h"
#include "Catalogo.h"

int main(){

//Casos de prueba

  //Creamos los objetos de la clase Departamento
  Departamento d1("departamento", 0);
  d1.setNombre("Loma Dorada #15");
  d1.setPrecioNoche(2000);

  Departamento d2("departamento", 0);
  d2.setNombre("Palmares #23");
  d2.setPrecioNoche(1500);

  Departamento d3("depa3", 0);
  d3.setNombre("Hidalgo #15");
  d3.setPrecioNoche(4000);

  //Agregamos los departamentos al catálogo
  //Usamos una agregacióón para crear el catalogo con base en los abjetos previamente creados
  Catalogo c1("Catalogo 1");
  c1.agregaDepartamento(d1);
  c1.agregaDepartamento(d2);
  c1.agregaDepartamento(d3);
  c1.mostrarCatalogo();

  //Capturamos los datos de las reservas 
  //En el constructor de la clase "Reserva" también costruimos dos objetos de la clase "Fecha" por medio de una composición 
  //También unsamos una agregación con el objeto d2 en el constructor
  Reserva r1("Ramiro", 05,12,2019, 20,12,2019, d2);
  r1.calcularMonto();
  r1.mostrarReserva();

  Reserva r2("Amanda", 12,01,2020, 15,01,2020, d1);
  r2.calcularMonto();
  r2.mostrarReserva();

  return 0;
}