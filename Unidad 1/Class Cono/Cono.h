#pragma once
#include <cmath>
class Cono
{
	//Atributes
private:
	double radio;
	double gtriz;
	double h;
public:
	Cono() { this->radio = 0; this->gtriz = 0; this->h = 0; }
	Cono(double radio, double gtriz, double h) { this->radio = radio; this->gtriz = gtriz; this->h = h; }
	~Cono(){}

	//Metodos Getter / setter
	void setRadio(double rad) { radio = rad; }
	void setGtriz(double gt) { gtriz = gt; }
	void setH(double heigth) { h = heigth; }
	double getRadio() { return (this->radio); }
	double getGtriz() { return (this->gtriz); }
	double getH() { return (this->h); }
	//Metodos de servicio

	double Area() { return(3.14 * this->radio * this->gtriz + (3.14 * pow(this->radio, 2))); }
	double Volumen() { return ((3.14 * pow(this->radio, 2) * this->h) / 3); }
};

