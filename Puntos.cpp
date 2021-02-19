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

void Puntos::setNombre(){
	this->nombre=nombre;
}
		
void Puntos::setGolFavor(){
	this->Golfavor=Golfavor;
}
	
void Puntos::setGolContra(){
	this->Golcontra=Golcontra;
}

void Puntos::setPartidosWon(){
	this->partidosWon=partidosWon;
}

void Puntos::setPartidosLoose(){
	this->partidosLoose=partidosLoose;
}

void Puntos::setPartidosTie(){
	this->partidosTie=partidosTie;
}
  		