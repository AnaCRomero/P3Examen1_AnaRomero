#include "Liga.hpp"

Liga::Liga(){
}

Liga::Liga(string,vector<EquipoFutbol> equipos,vector<Partidos> jornada,vector<Tabla> tabla){
    this->equipos = equipos; 
    this->jornada = jornada; 
    this->tabla = tabla; 
}

Liga::~Liga(){
}

void Liga::setEquipos(EquipoFutbol e){
    equipos.push_back(e); 
}

void Liga::setPartidos(Partidos p){
    jornada.push_back(p); 
}
   
void Liga::setTabla(Tabla t){
    tabla.push_back(t);
}   
   
   
vector<Partidos> Liga::getPartidos(){
    return this->jornada; 
}

   
vector<Tabla> Liga::getTabla(){
	return this->tabla; 
}
    
    
vector<EquipoFutbol>  Liga::getEquipos(){
    return this->equipos; 
} 

void Liga::erase(int posicion){
    equipos.erase(begin(equipos)+posicion);
};