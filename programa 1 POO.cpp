#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;
 
class telefono{
    private:
        float altura;
        float ancho;
        float largo;
        string color;
    
    public:
    telefono (float, float, float, string);
    void diseno();
    void volumen();

};

telefono:: telefono(float _altura, float _ancho, float _largo, string _color){
    altura= _altura;
    ancho= _ancho;
    largo= _largo;
    color= _color;

}

void telefono:: volumen(){
    cout<<"El telefono medidas"<<endl<<"altura: "<<altura<<endl<<"Ancho: "<<ancho<<endl<<"largo: "<<largo<<endl;
}

void telefono::diseno(){
    cout<<"Diseno del telefono"<<endl;
    cout<<"color: "<<color<<endl;
}
int main(){
    telefono p1= telefono(15, 2.4, 10, "negro");
    telefono p2= telefono(20, 2.7, 12, "rojo");

    p1.volumen();
    p2.diseno();
}
