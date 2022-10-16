#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nombre, apellido, direccion, nit;
	int telefono;
	cout<<"Ingrese nit:";
	cin>>nit;
	cout<<"Ingrese nombre:";
	cin>>nombre;
	cout<<"Ingrese apelido:";
	cin>>apellido;
	cout<<"Ingrese direccion:";
	cin>>direccion;
	cout<<"Ingrese telefono:";
	cin>>telefono;
	Cliente obj = Cliente(nombre, apellido, direccion, telefono, nit);
	obj.mostrar();
	cout<<"Ingresar Nit: ";
	cin>>nit;
	Cliente obj2 = Cliente(nombre, apellido, direccion, telefono, nit);
	obj2.mostrar();
}