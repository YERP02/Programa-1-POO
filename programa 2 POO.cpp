#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

class ventilador{
	private: //atributos
		int aspas;
		string marca;
		string color;
		int velocidad;
		string tipo;
		int puntuacion;
	
	public:
		ventilador(int, string, string, int, string, int);
		void caracteristicas();
		void calificacion();
};

ventilador::ventilador(int _aspas, string _marca,string _color,int _velocidad,string _tipo, int _puntuacion){
	aspas = _aspas;
	marca = _marca;
	color = _color;
	velocidad = _velocidad;
	tipo = _tipo;
	puntuacion = _puntuacion;
}

void ventilador::caracteristicas(){
	cout<<endl<<" Caracateristicas del ventilador: "<<marca<<endl<<"color: "<<color<<endl<<"numero de aspas: "<<aspas<<endl;
	cout<<" velocidades: "<<velocidad<<endl<<"tipo: "<<tipo<<endl;
}

void ventilador::calificacion(){
	cout<<endl<<" Es un ventilador "<<marca<<" y cuenta con "<<velocidad;
	cout<<" considero que hace bien su funcion le doy un "<<puntuacion<<" de puntuacion "<<endl;
}

int main(){
	
	ventilador p1 = ventilador(3,"taorus","negro",3,"suelo",8);
	ventilador p2 = ventilador (3,"mabe","blanco",4,"techo",7);
	ventilador p3 = ventilador (4,"phillip","metal",4,"suelo",9.5);
	
	p1.caracteristicas();
	p2.calificacion();
	p3.caracteristicas();
	p3.calificacion();
	
	system("pause");
	return 0;
}
