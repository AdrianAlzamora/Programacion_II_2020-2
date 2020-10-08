#pragma once
#include <cmath>
class Circle
{
	//Atibutes
private:
	double radio;
public:
	Circle() { this->radio = 0; }
	Circle(double radio) { this->radio = radio; }

	~Circle(){}
	//Metodos Getter / Setter
	void setRadio(double rad) {
		radio = rad;
	}
	double getRadio() {
		return(this->radio);
	}
	//Metodos de servicio
	double Area() {
		return (3.14 * pow(this->radio, 2));
	}
};

