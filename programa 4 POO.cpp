#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

class mascota{
	private: //atributos
		int edad;
		string nombre;
		string tipo;
		string color;
		string petshop;
		
	
	public:
		mascota(int, string, string, string, string);
		void datos();
		void historia();
};

mascota::mascota(int _edad,string _nombre, string _tipo, string _color, string _petshop){
	edad = _edad;
	nombre = _nombre;
	tipo = _tipo;
	color = _color;
	petshop = _petshop;
}

void mascota::datos(){
	cout<<endl<<" Mi "<<tipo<< " se llama "<<nombre<<" tiene "<<edad<<" es de color "<<color<<endl;
}

void mascota::historia(){
	cout<<" EL/Ella es "<<nombre<<", la tengo desde "<<edad<<" anos"<<" la recogi en la tienda de macotas "<<petshop<<endl;
}

int main(){
	
	mascota p1 = mascota(5,"Timmy", "perro","blanco","+kota");
	mascota p2 = mascota(3,"Nala","gato","gris","Mascotas Gdl");
	
	p1.datos();
	p2.datos();
	p2.historia();
	
	system("pause");
	return 0;
}
