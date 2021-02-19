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
  		
  		EquipoFutbol getNombre();
		int getGolFavor();
		int getGolContra();
		int getPartidosWon();
		int getPartidosLoose();
		int getPartidosTie();
		
		void getNombre(EquipoFutbol);
		void getGolFavor(int);
		void getGolContra(int);
		void getPartidosWon(int);
		void getPartidosLoose(int);
		void getPartidosTie(int);
};
#endif