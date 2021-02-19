#include "Tabla.hpp"

Tabla::Tabla(){
} 

Tabla::Tabla(vector<Puntos> puntosEquipo){
	this->puntosEquipo=puntosEquipo;	
}

Tabla::~Tabla(){
}

vector<Puntos> Tabla::getPuntosEquipo(){
	return this->puntosEquipo;
}

void Tabla::setPuntosEquipo(Puntos *equipo){
	puntosEquipo.push_back(*equipo);
}