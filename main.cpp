#include <iostream>
#include<string>
#include <vector>
#include <random>
#include "Liga.hpp"
#include "Tabla.hpp"
#include "Partidos.hpp"
#include "Puntos.hpp"
#include "EquipoFutbol.hpp"
using namespace std;

int main() {
	
	Liga* liga;
	Tabla* tabla;
	bool principal =true;
	int op;
	
	while (principal){
		cout << "-----------------Menu--------------"<<endl;
		cout << "1. Mantenimiento de equipos"<<endl;
		cout << "2. Generar jornada de partidos"<<endl;
		cout << "3. Simular partidos"<<endl;
		cout << "4. Imprimir tabla y resultados"<<endl;
		cout << "5. Salir"<<endl;
		cout << "-----------------------------------"<<endl;
		cout << "Ingrese una opcion: " <<endl <<"-> ";
		cin >> op;
		switch (op){
			case 1:
				{//inicio crud
					bool crud = true;
					int opCrud;
					while (crud){
						cout << "-----------------Menu--------------"<<endl;
						cout << "1. Crear equipo"<<endl;
						cout << "2. Modificar equipo"<<endl;
						cout << "3. Listar equipo"<<endl;
						cout << "4. Eliminar equipo"<<endl;
						cout << "5. Regresar"<<endl;
						cout << "-----------------------------------"<<endl;
						cout << "Ingrese una opcion: " <<endl <<"-> ";
						cin >> opCrud;
						switch (opCrud){
							case 1:
								{
									//nuevo equipo
									int puntuacion;
									puntuacion = 0 + rand() % (100);	
									string name;
									cout << "Ingrese el nombre del equipo: " << endl << "-> ";
									cin >> name;
									cout<<"Su skill como equipo es: "<< puntuacion <<endl;
									liga->setEquipos(new EquipoFutbol(name,puntuacion)); //los mete a la liga
									EquipoFutbol team(name,puntuacion);	//variable de paso
									
									//para la tabla
									int favor,contra,win,loose,tie;
		                        	cout<<"Ingrese los goles a favor: "<<endl; 
		                          	cin>>favor; 
		                          	cout<<"Ingrese los goles en contra: "<<endl; 
		                          	cin>>contra; 
		                          	cout<<"Ingrese los partidos ganados: "<<endl; 
		                          	cin>>win; 
		                          	cout<<"Ingrese los partidos perdidos: "<<endl;
		                          	cin>>loose; 
		                          	cout<<"Ingrese los partidos empatados: "<<endl; 
		                          	cin>>tie; 
		                          	
		                          	Puntos* puntitos = new Puntos (team,favor,contra,win,loose,tie);//los mete a la tabla
                          			Tabla* tabla = new Tabla(); 
                          			tabla->setPuntosEquipo(puntitos);
                          			liga->setTabla(tabla);
								}//add
								break;
							case 2:
								{//mod
								bool crud = true;
								int opmod;
								while (opmod){
									cout << "-----------------Menu--------------"<<endl;
									cout << "1. Modificar nombre"<<endl;
									cout << "2. Modificar skill"<<endl;
									cout << "3. Regresar"<<endl;;
									cout << "-----------------------------------"<<endl;
									cout << "Ingrese una opcion: " <<endl <<"-> ";
									cin >> opmod;
									switch (opmod){
										case 1:
										{
												
										}
											break;
										case 2:
										{
											int puntuacion;
											puntuacion = 0 + rand() % (100);					
										}
											break;
										case 3:
										{
											cout << "Regresando...";
											opmod = false;			
										}
											break;
								}//mod
								break;
							case 3:
								{
									
								}//list	
								break;
							case 4:
								{
									
								}//delete
								break;
							case 5:
								{
									cout << "Regresando...";
									crud = false;	
								}
								break;
						}//din switch crud
					}//fin resp crud
				}//fin de crud
				
				break;
			case 2:
				{//inicio de generar jornadas
					
				}//fin de generar jornadas
				break;
			case 3:
				{//inicio de imprimir tablas y resultados
					
				}//fin de imprimir tablas y resultados
				break;
			case 4:
				{
					cout << "Saliendo...";
					principal = false;
				}
				break;
		}//fin switch principal
	}//resp principal
	
	
	
	return 0;
}//fin del principal