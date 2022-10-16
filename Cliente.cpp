#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : Persona{
	//atributos
	private :
		string nit;
	//consructor
	public :
	Cliente(){
	}
	Cliente(string nom, string ape, string dir, int tel, string n) : Persona(nom, ape, dir, tel ){
	nit = n;
	}
	//set (modificadores)
	void setNit(string n){nit =n;}
	void setNombres(string nom){nombres =nom;}
	void setApellidos(string ape){apellidos =ape;}
	void setDireccion(string dir){direccion =dir;}
	void setTelefono(int tel){telefono=tel;}
	//get(visualizadores
	string getNit(){return nit;}
string getNombres(){return nombres;}
string getApellidos(){return apellidos;}
string getDireccion(){return direccion;}
int getTelefono(){return telefono;}

	//metodos
	void mostrar(){
		cout<<"_______________________"<<endl;
		cout<<"Nit:"<<nit<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"telefono:"<<telefono<<endl;}
};