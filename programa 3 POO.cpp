#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

class persona{
	private: //atributos
		int edad;
		string nombre;
	
	public:
		persona(int, string);
		void leer();
		void correr();
};

persona::persona(int _edad,string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void persona::leer(){
	cout<<" soy"<<nombre<<" y estoy leyendo un libro"<<endl;
}

void persona::correr(){
	cout<<" soy"<<nombre<<" y estoy corriendo un maraton y tengo: "<<edad<<"anos"<<endl;
}

int main(){
	
	persona p1 = persona(20, " Yahir Ramirez");
	persona p2 = persona(19, " luis Perez ");
	persona p3 = persona (22, " juan snachez ");
	
	p1.leer();
	p2.correr();
	p3.leer();
	p3.correr();
	
	system("pause");
	return 0;
}
