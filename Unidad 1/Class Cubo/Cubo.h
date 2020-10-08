#pragma once
#include <cmath>
class Cubo
{
	//Atributos
private:
	double lado;
public:
	//METODOS
	// Constructor & Destructor
	Cubo() { this->lado = 0; }
	Cubo(double lado) { this->lado = lado; }
	~Cubo(){}

	//Metodos Setter / Getter
	void setLado(double lad) {
		lado = lad;
	}
	double getLado() {
		return(this->lado);
	}

	//Metodos de servicio
	double volumen() {
		return (pow(this->lado, 3));
	}
};

