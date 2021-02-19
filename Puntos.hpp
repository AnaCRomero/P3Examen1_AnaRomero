#ifndef Puntos_hpp
#define Puntos_hpp
#include<string>
#include<iostream>
#include "EquipoFutbol.hpp"
using namespace std;

class Puntos{
	private: 
		EquipoFutbol nombre;
		int Golfavor;
		int Golcontra;
		int partidosWon;
		int partidosLoose;
		int partidosTie;
		
	public:
		Puntos();  
  		Puntos(EquipoFutbol,int,int,int,int,int);
  		~Puntos();
  		
  		string getNombre();
		int getGolFavor();
		int getGolContra();
		int getPartidosWon();
		int getPartidosLoose();
		int getPartidosTie();
		
		void setNombre();
		void setGolFavor();
		void setGolContra();
		void setPartidosWon();
		void setPartidosLoose();
		void setPartidosTie();
};
#endif