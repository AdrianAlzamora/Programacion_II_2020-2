#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona
{
private:
	string name;
	int age;

public:
	Persona();
	Persona(string name, int age);
	~Persona();

	void  setName(string _name);
	string getName();

	void setAge(int _age);
	int getAge();

	void Mostrar();


};

