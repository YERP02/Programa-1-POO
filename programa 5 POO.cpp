#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

class zapato{
	private: //atributos
		float talla;
		int comodidad;
		string marca;
		string color;
		string tipo;
	
	public:
		zapato(float, int, string, string, string);
		void comprar();
		void caracteristicas();
		void maraton();
};

zapato::zapato(float _talla,int _comodidad, string _marca, string _color, string _tipo){
	talla = _talla;
	comodidad = _comodidad;
	marca = _marca;
	color = _color;
	tipo = _tipo;
}

void zapato::comprar(){
	cout<<endl<<" Estos son "<<marca<<" y estoy apunto de comprarlos ya que tienen "<<comodidad<<" comodidad"<<endl;
}

void zapato::caracteristicas(){
	cout<<endl<<"Estos zapatos "<<marca<<endl<<"tipo: "<<tipo<<endl<<"color: "<<color<<endl<<"comodidad: "<<comodidad<<endl;
}

void zapato::maraton(){
	cout<<endl<<"Estoy por correr un maraton y necesito unos y estoy entre"<<endl;
}

int main(){
	
	zapato p1 = zapato (8.5,8,"nike","negro","correr");
	zapato p2 = zapato (8,9,"puma","rojos","volleyball");
	zapato p3 = zapato (9,7,"gucci","verdes","casual");
	
	p2.comprar();
	p1.caracteristicas();
	p2.maraton();
	p2.caracteristicas();
	p3.caracteristicas();
	
	system("pause");
	return 0;
}
