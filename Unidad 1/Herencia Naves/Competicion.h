#pragma once
#include "Alfa.h"
#include "Beta.h"
#include "Gamma.h"

class Competicion
{
private:
	int cont;
	Alfa* objalfa;
	Beta* objbeta;
	Gamma* objgamma;
public:
	Competicion();
	~Competicion();
	void drawEverything();
	void moveEverything();
	void again();

};

