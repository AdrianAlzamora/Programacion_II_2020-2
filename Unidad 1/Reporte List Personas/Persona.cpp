#include "Persona.h"
Persona::Persona(){}
Persona::Persona(string n, int e, double p, bool v, char ec){
	name = n;
	age = e;
	vive = v;
	estadoCivil = ec;
}
Persona::~Persona(){}


void Persona::setName(string _nam){
	name = _nam;
}
string Persona::getName() { return name; }
void Persona::setAge(int _e){
	age = _e;
}
int Persona::getAge() { return age; }
void Persona::setPeso(double _p){
	peso = _p;
}
double Persona::getPeso() { return peso; }
void Persona::setVive(bool _v){
	vive = _v;
}
bool Persona::getVive() { return vive; }
void Persona::setEstadoCivil(char _ec){
	estadoCivil = _ec;
}
char Persona::getEstadoCivil() { return estadoCivil; }


string Persona::toString(){
	return "nombre: " + getName() + "\n" +
		"Edad: " + to_string(getAge()) + "\n" +
		"peso: " + to_string(getPeso()) + "\n" +
		"vive: " + (vive ? "SI" : "NO") + "\n" +
		"E.C.: " + getEstadoCivil() + "";
}