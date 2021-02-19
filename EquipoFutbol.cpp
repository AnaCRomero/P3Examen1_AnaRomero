#include "EquipoFutbol.hpp"

EquipoFutbol::EquipoFutbol(){
}  
  
EquipoFutbol::EquipoFutbol(string nombre,int puntuacion){
	this->nombre = nombre;
	this->puntuacion = puntuacion;
}

EquipoFutbol::~EquipoFutbol(){
}
  
int EquipoFutbol::getPuntuacion(){
	return this->puntuacion;
}

string EquipoFutbol::getNombre(){
	return this->nombre;
}
  
void EquipoFutbol::setPuntuacion(int puntuacion){
	this->puntuacion=puntuacion;
}

void EquipoFutbol::setNombre(string nombre){
	this->nombre=nombre;
}