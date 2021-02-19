#include "Partidos.hpp"

Partidos::Partidos(){	
}
 
Partidos::Partidos(bool jugo,EquipoFutbol Q1,int GolQ1,EquipoFutbol Q2,int GolQ2){
	this->jugo = jugo;
	this->Q1 = Q1;
	this->GolQ1 = GolQ1;
	this->Q2 = Q2;
	this->GolQ2 = GolQ2;
}

Partidos::~Partidos(){
}
  
bool Partidos::getJugo(){
	return this->jugo;
}

EquipoFutbol Partidos::getQ1(){
	return this->Q1;
}

int Partidos::getGolQ1(){
	return this->GolQ1;		
}
		
EquipoFutbol Partidos::getQ2(){
	return this->Q2;	
}

int Partidos::getGolQ2(){
	return this->GolQ2;
}

void Partidos::setJugo(bool jugo){
	this->jugo=jugo;
}

void Partidos::setQ1(EquipoFutbol Q1){
	this->Q1=Q1;
}
void Partidos::setQ2(EquipoFutbol Q2){
	this->Q2=Q2;
}
void Partidos::setGolQ1(int GolQ1){
	this->GolQ1=GolQ1;
}
void Partidos::setGolQ2(int GolQ2){
	this->GolQ2=GolQ2;
}


