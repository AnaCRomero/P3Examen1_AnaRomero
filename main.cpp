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
	EquipoFutbol* teams;
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
                          			
                          			cout<< "Equipo creado exitosamente!"<< endl;
								}//add
								break;
							case 2:
								{
									bool seguire = true;
									int mod;
									while(seguire){
										cout << "-----------------Menu--------------"<<endl;
										cout << "1. Nombre"<<endl;
										cout << "2. Skill"<<endl;
										cout << "3. Regresar"<<endl;
										cout << "-----------------------------------"<<endl;
										cout << "Ingrese una opcion: " <<endl <<"-> ";
										cin >> mod;
										switch(mod){
											case 1:
												{
													string name;
													cout << "-----------LISTA DE EQUIPOS --------------" << endl;
													for(int i=0; i<liga->getEquipos().size(); i++){
						                                //teams = liga->getEquipos().at(i); 
						                            }
						                            
						                            int indice;
						                            cout<<"Ingrese el indice: "<<endl << "-> ";  
						                            cin>>indice; 
						                            //teams = liga->getEquipos().at(i); 
						                            
						                            cout<<"Ingrese el nuevo nombre: "<<endl << "-> ";  
				                                    cin>>name; 
				                                	teams->setNombre(name); 
				                                	cout<<"Su nuevo nombre de equipo es: "<< name <<endl;
												}//name
												break;
											case 2:
												{
													int puntuacion;
													puntuacion = 0 + rand() % (100);	
													teams->setPuntuacion(puntuacion);
													cout<<"Su nuevo skill como equipo es: "<< puntuacion <<endl;
												}//skill
												break;
											case 3:
												{
													cout << "Regresando...";
													seguire = false;		
												}//regresar
												break;
										}//fin del switch mod
									}//fin de mod resp
								}//fin de mod
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