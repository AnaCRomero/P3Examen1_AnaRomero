#include "Puntos.hpp"

Puntos::Puntos(){
}

Puntos::Puntos(EquipoFutbol nombre,int Golfavor,int Golcontra,int partidosWon,int partidosLoose,int partidosTie){
	this->nombre=nombre;
	this->Golfavor=Golfavor;
	this->Golcontra=Golcontra;
	this->partidosWon=partidosWon;
	this->partidosLoose=partidosLoose;
	this->partidosTie=partidosTie;
}

Puntos::~Puntos(){
}

EquipoFutbol Puntos::getNombre(){
	return this->nombre;
}

int Puntos::getGolFavor(){
	return this->Golfavor;
}

int Puntos::getGolContra(){
	return this->Golcontra;
}

int Puntos::getPartidosWon(){
	return this->partidosWon;
}

int Puntos::getPartidosLoose(){
	return this->partidosLoose;
}

int Puntos::getPartidosTie(){
	return this->partidosTie;
}	
  		