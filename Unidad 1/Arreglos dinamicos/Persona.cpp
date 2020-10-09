#include "Persona.h"
Persona::Persona(){}
Persona::Persona(string name, int age){
	this->name = name;
	this->age = age;
}
Persona::~Persona(){}

void  Persona::setName(string _name){
	name = _name;
}
string Persona::getName(){
	return name;
}
	
void Persona::setAge(int _age){
	age = _age;
}
int Persona::getAge(){
	return age;
}

void Persona::Mostrar(){
	cout << name << "\t" << age << endl;
}
