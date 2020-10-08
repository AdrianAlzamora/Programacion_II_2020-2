#pragma once
//Uso de contenedores de objetos
#include <iostream>
#include <string>
using namespace std;
class Persona
{
private:
	//atributos
    string name;
	int age;
	double peso;
	bool vive;
	char estadoCivil;
public:
	Persona();
	Persona(string n, int e, double p, bool v, char ec);
	~Persona();
	//Methods Setter | Getter

	void setName(string _nam);
	string getName();
	void setAge(int _e);
	int getAge();
	void setPeso(double _p);
	double getPeso();
	void setVive(bool _v);
	bool getVive();
	void setEstadoCivil(char _ec);
	char getEstadoCivil();


	string toString();


};

