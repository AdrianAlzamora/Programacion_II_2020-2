#include "ListaPersona.h"
#include "Persona.h"

void reporteDatos(vector<Persona*> lp, string titulo) {
	cout << titulo << endl;
	cout << "------------------------------" << endl;
	for (Persona* p: lp )
	{
		cout << p->toString() << endl;
	}
}

int main() {
	ListaPersona* lp = new ListaPersona();
	lp->initListaPersona();
	reporteDatos(lp->getListadoPersona(), "REPORTE GENERAL");
	reporteDatos(lp->reporte1(), "Reporte menor a 15");
	system("pause");
	return 0;
}