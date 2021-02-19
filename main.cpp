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
						cout << "5. Salir"<<endl;
						cout << "-----------------------------------"<<endl;
						cout << "Ingrese una opcion: " <<endl <<"-> ";
						cin >> opCrud;
						switch (opCrud){
							case 1:
								{
									int puntuacion;
									puntuacion = 0 + rand() % (100);	
									string name;
									cout << "Ingrese el nombre del equipo: " << endl << "-> ";
									cin >> name;
									
									
								}//add
								break;
							case 2:
								{
									
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