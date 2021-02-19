#ifndef Liga_hpp
#define Liga_hpp
#include<string>
#include<iostream>
#include "EquipoFutbol.hpp"
#include "Tabla.hpp"
#include "Partidos.hpp"
using namespace std;

class Liga{
	private: 
	    string nombre; 
	    vector<EquipoFutbol> equipos; 
	    vector<Partidos> jornada; 
	    vector<Tabla> tabla; 

    public: 
	    Liga(); 
	    Liga(string,vector<EquipoFutbol>,vector<Partidos>,vector<Tabla>);
	    ~Liga(); 

    void setEquipos(EquipoFutbol*);
    void setPartidos(Partidos*);
    void setTabla(Tabla*); 
    
    vector<Partidos> getPartidos();
    vector<EquipoFutbol>  getEquipos(); 
    vector<Tabla> getTabla();
    
};
#endif