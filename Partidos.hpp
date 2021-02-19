#ifndef Partidos_hpp
#define Partidos_hpp
#include<string>
#include<iostream>
#include <random>
#include "EquipoFutbol.hpp"
using namespace std;

class Partidos{
	private:
		bool jugo;
		EquipoFutbol Q1;
		EquipoFutbol Q2;
		int GolQ1;
		int GolQ2;
		
	public:
		Partidos();  
  		Partidos(bool,EquipoFutbol,int,EquipoFutbol,int);
  		~Partidos();
  
  		bool getJugo();
		EquipoFutbol getQ1();
		int getGolQ1();
		EquipoFutbol getQ2();
		int getGolQ2();
		
		void setJugo(bool);
  		void setQ1(EquipoFutbol);
  		void setQ2(EquipoFutbol);
  		void setGolQ1(int);
  		void setGolQ2(int);
};
#endif