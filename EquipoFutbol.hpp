#ifndef EquipoFutbol_hpp
#define EquipoFutbol_hpp
#include<string>
#include<iostream>
#include <random>
using namespace std;

class EquipoFutbol {
	private:
		string nombre;
		int puntuacion;
  
  public:
  EquipoFutbol();  
  EquipoFutbol(string,int);
  ~EquipoFutbol();
  
  int getPuntuacion();
  string getNombre();
  
  void setPuntuacion(int);
  void setNombre(string);

};
#endif