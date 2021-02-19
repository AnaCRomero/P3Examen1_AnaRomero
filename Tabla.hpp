#ifndef Tabla_hpp
#define Tabla_hpp
#include <vector>
#include "Puntos.hpp"

class Tabla{
    private: 
    vector<Puntos> puntosEquipo; 
    
    public: 
    Tabla(); 
    Tabla(vector<Puntos>);
    ~Tabla(); 
	
	vector<Puntos> getPuntosEquipo();
	
    void setPuntosEquipo(Puntos); 
};
#endif